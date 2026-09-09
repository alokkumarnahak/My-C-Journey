//Demonstration of loop control statements in C
//first prime number after N

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to find first prime number after N ---\n\n");

    //variable declaration
    int n;
    int i;
    int j;
    int isPrime;

    //input from user
    printf("Enter N: ");
    scanf("%d", &n);

    //logic
    for (i = n + 1; ; i++)
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
            printf("First prime number after %d: %d\n", n, i);
            break;
        }
    }

    //return statement
    return 0;
}