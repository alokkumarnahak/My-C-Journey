// Demonstrate while loop
// Program to print sum from 1 to n

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    int n;
    int i = 1;
    int sum = 0;

    // program description
    printf("--- Program to print sum from 1 to n ---\n\n");

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
        sum += i;
        i++;
    }

    // printing sum
    printf("Sum from 1 to %d is : %d\n", n, sum);

    // return statement
    return 0;
}