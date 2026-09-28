// Demonstration of array traversal in C
// count number of positive and negative values present

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- COUNT POSITIVE & NEGATIVE VALUES ---\n\n");

    // variable declaration
    int n, pos = 0, neg = 0, zero = 0;

    // user input
    printf("Enter array size: ");
    scanf("%d", &n);

    // array declaration
    int arr[n];

    // valid size check
    if(n < 1)   {
        printf("Error: Invalid array size !\n");
        return 1;
    }

    // array input
    printf("Enter array elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // logic to count positive and negative
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            pos++;
        }
        else if(arr[i] < 0)  {
            neg++;
        }
        else    {
            zero++;
        }
    }

    // print output
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("No. of zeroes: %d\n",zero);

    // return statement
    return 0;
}
