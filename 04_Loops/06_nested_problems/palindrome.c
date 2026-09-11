//Demonstration of number problems using loops in C
//reverse and palindrome check

//preprocessor directive
#include <stdio.h>

//main function
int main()
{
    //program description
    printf("--- Program to reverse a number and check palindrome ---\n\n");

    //variable declaration
    int n;
    int original;
    int digit;
    int reverse = 0;

    //input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //storing original number
    original = n;

    //logic
    while (n > 0)
    {
        digit = n % 10;

        reverse = reverse * 10 + digit;

        n = n / 10;
    }

    //output
    printf("Reverse = %d\n", reverse);

    //palindrome check
    if (original == reverse)
    {
        printf("Palindrome = Yes\n");
    }
    else
    {
        printf("Palindrome = No\n");
    }

    //return statement
    return 0;
}
