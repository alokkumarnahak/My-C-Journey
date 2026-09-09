//Demonstration of loop control statements in C
//sum only valid numbers

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to find sum of positive even numbers ---\n\n");

    //variable declaration
    int n;
    int num;
    int sum = 0;
    int i;

    //input from user
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    //logic
    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num <= 0 || num % 2 != 0)
        {
            continue;
        }

        sum = sum + num;
    }

    //printing output
    printf("Sum of positive even numbers: %d\n", sum);

    //return statement
    return 0;
}