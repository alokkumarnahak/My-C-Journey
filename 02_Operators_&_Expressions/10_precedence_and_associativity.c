// Demonstrate operator precedence and associativity in C

// Preprocessor directive
#include <stdio.h>

// Main function
int main()
{
    // Program description
    printf("-: Demonstrate Operator Precedence and Associativity in C :-\n\n");

    // Variable declaration
    int a = 10;
    int b = 5;
    int c = 2;
    int result;

    // Operator precedence
    printf("----- Operator Precedence -----\n\n");

    result = a + b * c;

    printf("Expression : a + b * c\n");
    printf("Result     : %d\n\n", result);

    result = (a + b) * c;

    printf("Expression : (a + b) * c\n");
    printf("Result     : %d\n\n", result);

    // Associativity
    printf("----- Operator Associativity -----\n\n");

    result = a - b - c;

    printf("Expression : a - b - c\n");
    printf("Result     : %d\n", result);
    printf("Evaluation : (a - b) - c\n\n");

    result = a / b * c;

    printf("Expression : a / b * c\n");
    printf("Result     : %d\n", result);
    printf("Evaluation : (a / b) * c\n\n");

    // Parentheses change evaluation
    printf("----- Parentheses and Evaluation -----\n\n");

    result = a - (b - c);

    printf("Expression : a - (b - c)\n");
    printf("Result     : %d\n", result);

    return 0;
}