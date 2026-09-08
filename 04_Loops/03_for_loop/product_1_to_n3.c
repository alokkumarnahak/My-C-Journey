// Demonstrate for loop
// Program to print product from 1 to n

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    int n;
    long int product = 1;

    // program description
    printf("--- Product from 1 to n ---\n");
    printf("Note: This program will calculate the product upto number 19.\n\n");

    // taking input from user
    printf("Enter n(positive) : ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input !");
        return 1;
    }

    // logic
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }

    // printing product
    printf("Product from 1 to %d is : %ld\n", n, product);

    // return statement
    return 0;
}