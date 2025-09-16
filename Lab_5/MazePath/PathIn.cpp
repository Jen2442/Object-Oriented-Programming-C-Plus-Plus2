#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> findPath( const vector<vector<int>>& grid, int srcX, int srcY, int dstX, int dstY ) {
    int rows = grid.size();
    int cols = grid[0].size();

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    vector<vector<int>> parentX(rows, vector<int>(cols, -1));
    vector<vector<int>> parentY(rows, vector<int>(cols, -1));

    vector<int> queueX;
    vector<int> queueY;
    int index = 0;

    queueX.push_back(srcX);
    queueY.push_back(srcY);
    visited[srcX][srcY] = true;

    while (index < queueX.size()) {
        int x = queueX[index];
        int y = queueY[index];
        index++;

        if (x == dstX && y == dstY) {
            // Reconstruct path
            vector<vector<int>> path;
            while (!(x == srcX && y == srcY)) {
                vector<int> step = {x, y};
                path.push_back(step);
                int tempX = parentX[x][y];
                int tempY = parentY[x][y];
                x = tempX;
                y = tempY;
            }

            path.push_back({srcX, srcY});

            // Reverse path manually
            vector<vector<int>> finalPath;
            for (int i = path.size() - 1; i >= 0; --i) {
                finalPath.push_back(path[i]);
            }
            return finalPath;
        }
        for (int d = 0; d < 4; ++d) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx >= 0 && ny >= 0 && nx < rows && ny < cols &&
                !visited[nx][ny] && grid[nx][ny] == 0) {
                visited[nx][ny] = true;
                parentX[nx][ny] = x;
                parentY[nx][ny] = y;
                queueX.push_back(nx);
                queueY.push_back(ny);
            }
        }
    }

    return {};
}


int main(){

    vector<vector<int>>grid={
        {0, 1, 0, 0},
        {0, 1, 0, 1},
        {0, 0, 0, 0},
        {1, 1, 1, 0}
    }; 
    
    int srcX = 0, srcY = 0;
    int dstX = 3, dstY = 4;

    vector<vector<int>> path = findPath(grid, srcX, srcY, dstX, dstY);

    for (int i = 0; i < path.size(); ++i) {
        cout << "(" << path[i][0] << ", " << path[i][1] << ") ";
    }

    return 0;




}