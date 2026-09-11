//Demonstration of number problems using loops in C
//digit sum and product

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to find sum and product of digits ---\n\n");

    //variable declaration
    int n;
    int digit;
    int sum = 0;
    int product = 1;

    //input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //logic
    while (n > 0)
    {
        digit = n % 10;

        sum = sum + digit;
        product = product * digit;

        n = n / 10;
    }

    //output
    printf("Sum of digits = %d\n", sum);
    printf("Product of digits = %d\n", product);

    //return statement
    return 0;
}
