// Demonstration of array traversal in C
// print in reverse order

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- PRINT REVERSE ORDER ---\n\n");

    // array declaration
    int arr[] = {1, 2, 3, 5, 6};

    int length = sizeof(arr) / sizeof(arr[0]);

    // array traversal
    for(int i = length - 1; i >= 0; i--) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // return statement
    return 0;
}
