// Demonstration of array traversal in C
// count number of even and odd values present

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- COUNT EVEN & ODD ELEMENTS ---\n\n");

    // variable declaration
    int n, even = 0, odd = 0;

    // user input
    printf("Enter array size: ");
    scanf("%d", &n);

    // array declaration
    int arr[n];

    // valid size check
    if(n < 1)   {
        printf("Error: Invalid array size !\n");
        return 1;

    // array input
    printf("Enter array elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // logic to count positive and negative
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        }
        else    {
            odd++;
        }
    }

    // print output
    printf("No. of even elements: %d\n", even);
    printf("No. of odd elements: %d\n", odd);

    // return statement
    return 0;
}
