//Demonstration of number problems using loops in C
//prime factors

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to find prime factors of a number ---\n\n");

    //variable declaration
    int n;
    int i;

    //input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //logic
    printf("Prime factors: ");

    for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }

    printf("\n");

    //return statement
    return 0;
}
