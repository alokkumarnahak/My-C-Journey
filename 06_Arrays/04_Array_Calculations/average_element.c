// Demonstration of array traversal in C
// print average of all elements

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- PRINT AVERAGE OF ELEMENTS ---\n\n");

    // variable declaration
    int n, sum = 0;
    float average;

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
    average = (float)sum / n;

    // print output
    printf("Average of elements: %.2f",average);

    // return statement
    return 0;
}
