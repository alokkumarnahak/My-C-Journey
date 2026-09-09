//Demonstration of loop control statements in C
//pattern using continue and break

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print square pattern using continue and break ---\n\n");

    //variable declaration
    int n;
    int i;
    int j;
    int num;

    //input from user
    printf("Enter N: ");
    scanf("%d", &n);

    //logic
    num = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (num > n * n)
            {
                break;
            }

            if (num % 3 == 0)
            {
                num++;
                continue;
            }

            printf("%d ", num);
            num++;
        }

        if (num > n * n)
        {
            break;
        }

        printf("\n");
    }

    //return statement
    return 0;
}