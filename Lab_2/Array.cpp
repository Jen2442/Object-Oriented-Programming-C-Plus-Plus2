#include<iostream>
#include<vector>
using namespace std;
/**
 * @brief prints the elements in the array adn their memory locations
 * 
 * @param arr - array of integers
 * @param size - the number of elements in the array
 */
void printMenArr(const int*arr,int size){
    printf("Array - Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i=0; i<size;i++){
        printf("Value :%i at Memory Location: %p\n", arr[i],arr+i);

    }
}
