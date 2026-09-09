//Demonstration of loop control statements in C
//prime numbers using nested loops

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print prime numbers from 2 to N ---\n\n");

    //variable declaration
    int n;
    int i;
    int j;
    int isPrime;

    //input from user
    printf("Enter N: ");
    scanf("%d", &n);

    //logic
    for (i = 2; i <= n; i++)
    {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    //return statement
    return 0;
}