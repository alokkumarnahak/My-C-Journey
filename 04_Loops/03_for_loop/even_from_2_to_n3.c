// Demonstrate for loop
// Program to print even numbers from 2 to n

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    int n;

    // program description
    printf("--- Program to print even numbers from 2 to n ---\n\n");

    // taking input from user
    printf("Enter n(positive) : ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input !");
        return 1;
    }

    // logic
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d\n", i);   
    }

    // return statement
    return 0;
}