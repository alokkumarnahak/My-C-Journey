// Demonstration of switch statements
// Display month based on number

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Display month based on number :-\n\n");

    // variable declaration
    int month;

    // input from user
    printf("Enter a number(1-12): ");
    scanf("%d", &month);

    // logic
    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("Invalid entry !");
        break;
    }

    // return statement
    return 0;
}