// Demonstration of array traversal in C
// print even indices

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- PRINT EVEN INDICES ---\n\n");

    // array declaration
    int arr[] = {1, 2, 3, 5, 6};

    int length = sizeof(arr) / sizeof(arr[0]);

    // array traversal
    for(int i = 0; i < length; i += 2) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // return statement
    return 0;
}
