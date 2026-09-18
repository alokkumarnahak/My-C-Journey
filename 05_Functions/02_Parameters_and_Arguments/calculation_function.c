// Demonstration of functions in C
// function display number

// preprocessor directive
#include <stdio.h>

// function declare and define
void displayAddition(int a, int b)   {
    printf("Addition       : %d + %d = %d\n", a, b, a+b);
}
void displaySubtraction(int a, int b)    {
    printf("Substraction   : %d - %d = %d\n", a, b, a-b);
}
void displayMultiplication(int a, int b) {
    printf("Multiplication : %d * %d = %d\n", a, b, a*b);
}

// main function
int main()
{
    // program description
    printf("Demonstrate function\n\n");

    //variable declaration
    int num1, num2;

    //user input
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    // function calling
    printf("========== CALCULATION REPORT ==========\n\n");
    displayAddition(num1, num2);
    displaySubtraction(num1, num2);
    displayMultiplication(num1, num2);
    printf("\n=========================================\n");

    // return statement
    return 0;
}
