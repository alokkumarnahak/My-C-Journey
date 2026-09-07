// Demonstrate while loop
// Program to print positive numbers from 1 to n

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    int n;
    int i = 1;

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
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    // return statement
    return 0;
}
