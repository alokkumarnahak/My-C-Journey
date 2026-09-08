// Demonstrate for loop
// Program to print multiplication table

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    int n;

    // program description
    printf("--- Multiplication Table ---\n\n");

    // taking input from user
    printf("Enter n(positive) : ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input !");
        return 1;
    }

    // logic
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    // return statement
    return 0;
}
