// Demonstration of array traversal in C
// print maximum value in the array

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- PRINT MAXIMUM OF ELEMENTS ---\n\n");

    // variable declaration
    int n, max;

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

    // initialising maximum value
    max = arr[0];

    // logic to find maximum
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // print output
    printf("Maximum value: %d",max);

    // return statement
    return 0;
}
