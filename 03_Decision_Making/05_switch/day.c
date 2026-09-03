// Demonstration of switch statements
// Display day based on number

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Display day based on number :-\n\n");

    // variable declaration
    int day;

    // input from user
    printf("Enter a number(1-7): ");
    scanf("%d", &day);

    // logic
    switch (day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid entry !");
        break;
    }

    // return statement
    return 0;
}