// Demonstration of return values in function
// function that returns arithmetic results

// preprocessor directive
#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

// main function
int main()
{
    // variable declaration
    int a, b;

    //user input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // output 
    printf("\n========== CALCULATOR ==========\n");

    printf("Addition       : %d\n", add(a, b));
    printf("Subtraction    : %d\n", subtract(a, b));
    printf("Multiplication : %d\n", multiply(a, b));

    if (b != 0)
    {
        printf("Division       : %d\n", divide(a, b));
    }
    else
    {
        printf("Division       : Cannot divide by zero\n");
    }

    printf("================================\n");

    // return statement
    return 0;
}

// Function definitions

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}
