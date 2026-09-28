// Demonstration of array traversal in C
// print sum of all elements

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- PRINT SUM OF ELEMENTS ---\n\n");

    // variable declaration
    int n, sum = 0;

    // user input
    printf("Enter array size: ");
    scanf("%d", &n);

    // array declaration
    int arr[n];

    // valid size check
    if(n < 1)   {
        printf("Error: Invalid array size !");
        return 1;
    }

    // array input
    printf("Enter array elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // logic
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // print output
    printf("Sum of elements: %d",sum);

    // return statement
    return 0;
}
