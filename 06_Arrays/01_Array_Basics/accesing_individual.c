// Demonstration of of arrays in C
// accessing array elements

// preprocessor directive
#include<stdio.h>

// main function
int main()  {

    // Arrays declaration

    // declare and initialise at once
    int arr[] = {1, 2, 3};

    // accessing array elements
    printf("arr[0] = %d\n",arr[0]);
    printf("aar[1] = %d\n",arr[1]);
    printf("aar[2] = %d\n",arr[2]);
    printf("arr[ ] = {%d, %d, %d}\n",arr[0], arr[1], arr[1]);

    // return statement
    return 0 ;
}
