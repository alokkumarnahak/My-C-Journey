// Expression-Based Calculator
// Demonstrates operators and expressions in C

#include <stdio.h>

int main()
{
    // Variable declaration
    float num1;
    float num2;

    float addition;
    float subtraction;
    float multiplication;
    float division;

    // Input
    printf("========== EXPRESSION-BASED CALCULATOR ==========\n\n");

    printf("Enter first number : ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Arithmetic expressions
    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    // Display results
    printf("\n================ RESULTS ================\n");

    printf("Addition       : %.2f\n", addition);
    printf("Subtraction    : %.2f\n", subtraction);
    printf("Multiplication : %.2f\n", multiplication);
    printf("Division       : %.2f\n", division);

    printf("==========================================\n");

    return 0;
}