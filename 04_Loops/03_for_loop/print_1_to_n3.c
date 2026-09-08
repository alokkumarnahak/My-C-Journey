// Demonstrate for loop
// Program to print positive numbers from 1 to n

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    int n;

    // program description
    printf("--- Program to print numbers from 1 to n ---\n\n");

    // taking input from user
    printf("Enter n(positive) : ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input !");
        return 1;
    }

    // logic
    for(int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    // return statement
    return 0;
}
