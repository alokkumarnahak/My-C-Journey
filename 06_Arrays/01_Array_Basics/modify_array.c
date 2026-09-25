// Demonstration of of arrays in C
// modifying array element

// preprocessor directive
#include<stdio.h>

// main function
int main()  {

    // declare and initialise at once
    int arr[] = {1, 2, 3};
    printf("Before modification arr[0] = %d\n",arr[0]);
    printf("arr[ ] = {%d, %d, %d}\n",arr[0], arr[1], arr[1]);

    // modifying array element
    arr[0] = arr[0] * 5;
    printf("After modification arr[0] = %d\n",arr[0]);
    printf("arr[ ] = {%d, %d, %d}\n",arr[0], arr[1], arr[1]);

    // return statement
    return 0 ;
}
