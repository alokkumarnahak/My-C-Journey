// Demonstrate for loop
// Program to print positive numbers from n to 1

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    int n;

    // program description
    printf("--- Program to print positive numbers from n to 1 ---\n\n");

    // taking input from user
    printf("Enter n(positive) : ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input !");
        return 1;
    }

    // logic
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    // return statement
    return 0;
}