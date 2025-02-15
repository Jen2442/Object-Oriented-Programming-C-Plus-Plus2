#include<iostream>
#include<vector>


using namespace std;

/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param arr - vector of integer
 */
void printMemvec(const int *vec, int size){// void printMemvec(const int *vec,int size)

    printf("vector -each int is worth %lu bytes\n", sizeof(vec[0]));

    for(int i=0; i<size;i++){
    printf("value: %i at memory location : %p\n", vec[i],vec+i);

    }

}
  
void incvecBy10(int*vec,int size){
    for(int i=0;i<size;i++){
        vec[i]+=10;

    }
}

int main(){
    
     const int SIZE=5;
     
     int vec[SIZE];
    

    for(int i=0;i<SIZE;i++){
        vec[i]=100+i;

    }

    printf("before increment---------------\n");
    printMemvec(vec,SIZE);
    incvecBy10(vec,SIZE);
    printf("after increment----------------\n");
    printMemvec(vec,SIZE);
    




    //hello

    return 0;

}

