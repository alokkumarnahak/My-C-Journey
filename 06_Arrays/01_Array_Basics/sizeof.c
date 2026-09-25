// Demonstration of of arrays in C
// use of sizeof() operator

// preprocessor directive
#include<stdio.h>

// main function
int main()  {

    // declare and initialise at once
    int arr[] = {1, 2, 3};
    
    // calculating memory occupying
    printf("Size of array: %u bytes.\n",sizeof(arr));

    // calculating length of array
    // length = size of array / size of individual element
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of array/elements in array: %d",length);

    // return statement
    return 0 ;
}
