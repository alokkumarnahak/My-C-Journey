// Demonstration if-else statements
//  Program to check whether a number is a multiple of another number

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("-: Program to check for multiples :-\n\n");

    // variable declaration
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Logic to check if num1 is a multiple of num2
    if (num1 % num2 == 0)
    {
        printf("%d is a multiple of %d.\n", num1, num2);
    }
    else
    {
        printf("%d is not a multiple of %d.\n", num1, num2);
    }

    // return statement
    return 0;
}
