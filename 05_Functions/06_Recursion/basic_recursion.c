// Demonstration of recursion
// function calling itself to count down

// preprocessor directive
#include <stdio.h>

// Function declaration
void countDown(int n);

// main function
int main()
{
    // variable declaration
    int number;

    // user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // function call
    printf("\nCountdown:\n");
    countDown(number);

    // return statement
    return 0;
}

// Function definition
void countDown(int n)
{
    // base condition
    if (n <= 0)
    {
        return;
    }

    // output
    printf("%d\n", n);

    // recursive function call
    countDown(n - 1);
}
