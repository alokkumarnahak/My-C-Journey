// Demonstrate integer division in C

// Preprocessor directive
#include <stdio.h>

// Main function
int main()
{
    // Variable declaration
    int a;
    int b;
    int result;

    // Input from user
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // Integer division
    result = a / b;

    // Display result
    printf("\nResult of integer division: %d\n", result);

    return 0;
}