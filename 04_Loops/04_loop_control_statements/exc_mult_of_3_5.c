//Demonstration of loop control statements in C
//print numbers except multiples of 3 or 5

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to print numbers except multiples of 3 or 5 ---\n\n");

    //variable declaration
    int a;
    int b;
    int i;

    //input from user
    printf("Enter starting number: ");
    scanf("%d", &a);

    printf("Enter ending number: ");
    scanf("%d", &b);

    //logic
    for (i = a; i <= b; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            continue;
        }

        printf("%d ", i);
    }

    //return statement
    return 0;
}
