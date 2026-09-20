// Demonstration of return values in function
// function-based calculation result report

// preprocessor directive
#include <stdio.h>

// Function declarations
int getSum(int a, int b);
int getProduct(int a, int b);
int getDifference(int a, int b);
int getSquare(int n);

// main function
int main()
{
    // variable declaration
    int a, b;
    int sum, product, difference;
    int square;

    // user input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // function calls
    sum = getSum(a, b);
    product = getProduct(a, b);
    difference = getDifference(a, b);
    square = getSquare(a);

    // output
    printf("\n====================================\n");
    printf("       CALCULATION REPORT\n");
    printf("====================================\n");

    printf("First Number  : %d\n", a);
    printf("Second Number : %d\n", b);
    printf("Sum           : %d\n", sum);
    printf("Difference    : %d\n", difference);
    printf("Product       : %d\n", product);
    printf("Square of %d   : %d\n", a, square);

    printf("====================================\n");

    // return statement
    return 0;
}

// Function definitions

int getSum(int a, int b)
{
    return a + b;
}

int getProduct(int a, int b)
{
    return a * b;
}

int getDifference(int a, int b)
{
    return a - b;
}

int getSquare(int n)
{
    return n * n;
}
