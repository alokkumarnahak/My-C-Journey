// Demonstration if-else statements
// Program to check whether a year is a leap year or not

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Program to check whether a year is a leap year or not :-\n\n");

    // variable declaration
    int year;

    // input from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // logic to determine leap year
    if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
    {
        printf("Leap year.");
    }
    else
    {
        printf("Not a leap year.");
    }

    // return statement
    return 0;
}