// Demonstration of array traversal in C
// traverse and 5 to every element

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- ARRAY TRAVERSAL ---\n\n");

    // array declaration
    int arr[] = {1, 2, 3, 5, 6};

    int length = sizeof(arr) / sizeof(arr[0]);

    // array traversal
    for(int i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // return statement
    return 0;
}
