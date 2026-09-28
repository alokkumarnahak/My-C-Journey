// Demonstration of array traversal in C
// print minimum value in the array

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- PRINT MINIMUM VALUE ---\n\n");

    // variable declaration
    int n, min;

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
    min = arr[0];

    // logic to find maximum
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // print output
    printf("Minimum value: %d",min);

    // return statement
    return 0;
}
