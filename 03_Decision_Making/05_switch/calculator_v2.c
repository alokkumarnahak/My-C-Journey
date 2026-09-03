// Demonstration of switch statements
// Simple calculator

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Simple calculator :-\n\n");

    // variable declaration
    int num1, num2;
    char operator;

    // input from user
    printf("Enter a 1st number: ");
    scanf("%d", &num1);

    printf("Enter a 2nd number: ");
    scanf("%d", &num2);

    getchar(); // it stores the newline character
    // without getchar(), scanf reads the newline character
    printf("Enter an operator: ");
    scanf("%c", &operator);

    // logic
    switch (operator)
    {
    case '+':
        printf("%d", (num1 + num2));
        break;
    case '-':
        printf("%d", (num1 - num2));
        break;
    case '*':
        printf("%d", (num1 * num2));
        break;
    case '/':
        printf("%.2f", ((float)num1 / num2));
        break;
    case '%':
        if (num2 == 0)
        {
            printf("Error !");
            return 1;
        }
        printf("%d", (num1 % num2));
        break;
    default:
        printf("Invalid entry !");
        break;
    }

    // return statement
    return 0;
}