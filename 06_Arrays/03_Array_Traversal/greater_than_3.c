// Demonstration of array traversal in C
// print elements greater than 3

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- PRINT ELEMENTS GREATER THAN 3 ---\n\n");

    // array declaration
    int arr[] = {1, 2, 3, 5, 6};

    int length = sizeof(arr) / sizeof(arr[0]);

    // array traversal
    for(int i = 0; i < length; i++) {
        if(arr[i] > 3)
            printf("arr[%d] = %d\n", i, arr[i]);
    }

    // return statement
    return 0;
}
