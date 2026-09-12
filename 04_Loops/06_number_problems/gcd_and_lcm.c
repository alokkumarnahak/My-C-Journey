//Demonstration of number problems using loops in C
//GCD and LCM

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to find GCD and LCM of two numbers ---\n\n");

    //variable declaration
    int a;
    int b;
    int originalA;
    int originalB;
    int i;
    int gcd;
    int lcm;

    //input from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    //storing original numbers
    originalA = a;
    originalB = b;

    //logic
    gcd = 1;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    lcm = (originalA * originalB) / gcd;

    //output
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    //return statement
    return 0;
}
