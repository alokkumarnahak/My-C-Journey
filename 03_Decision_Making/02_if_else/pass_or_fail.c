// Demonstration if-else statements
// Program to check divisible a student passed or failed

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Program to check a student passed or failed :-\n\n");

    // variable declaration
    int marks;

    // input from user
    printf("Enter marks in percentage: ");
    scanf("%d", &marks);

    // logic
    if ((marks > 33) && (marks <= 100))
    {
        printf("Congragulations !!\nPassed.");
    }
    else
    {
        printf("Failed !!");
    }

    // return statement
    return 0;
}