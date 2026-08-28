// Demonstrate expressions in C

// Preprocessor directive
#include <stdio.h>

// Main function
int main()
{
    // Variable declaration
    int a = 10;
    int b = 5;
    int c = 2;

    int arithmetic_Result;
    int relational_Result;
    int logical_Result;
    int assignment_Result;
    int conditional_Result;

    // Program description
    printf("-: Demonstrate expressions in C :-\n\n");

    // Arithmetic expression
    arithmetic_Result = a + b * c;
    printf("Arithmetic expression : a + b * c = %d\n", arithmetic_Result);

    // Relational expression
    relational_Result = a > b;
    printf("Relational expression : a > b = %d\n", relational_Result);

    // Logical expression
    logical_Result = (a > b) && (b > c);
    printf("Logical expression    : (a > b) && (b > c) = %d\n", logical_Result);

    // Assignment expression
    assignment_Result = a + b;
    printf("Assignment expression : assignmentResult = a + b = %d\n", assignment_Result);

    // Conditional expression
    conditional_Result = (a > b) ? a : b;
    printf("Conditional expression: (a > b) ? a : b = %d\n", conditional_Result);

    return 0;
}