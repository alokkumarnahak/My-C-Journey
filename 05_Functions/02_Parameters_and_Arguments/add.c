// Demonstration of functions in C
// function adds two numbers

// preprocessor directive
#include <stdio.h>

// function declare and define
void add(int a, int b)  {
    printf("Sum = %d\n",a+b);
} 

// main function
int main()
{
    // program description
    printf("--- Function to add two numbers ---\n\n");

    //variable declaration
    int num1, num2;

    //taking input
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    // function calling
    add(num1, num2);

    // return statement
    return 0;
}
