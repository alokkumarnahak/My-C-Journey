// Demonstrate do-while loop
// Program to print odd numbers from 1 to n

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    int n;
    int i = 1;

    // program description
    printf("--- Program to print odd numbers from 1 to n ---\n\n");

    // taking input from user
    printf("Enter n(positive) : ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input !");
        return 1;
    }

    // logic
    do
    {
        printf("%d\n", i);
        i += 2;
    } while (i <= n);

    // return statement
    return 0;
}