// Demonstration else-if-ladder statements
// Marks Classification

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Marks classification :-\n\n");

    // variable declaration
    int marks;

    // input from user
    printf("Enter marks: ");
    scanf("%d", &marks);

    // logic
    // checking valid marks
    if ((marks > 100) || (marks < 0))
    {
        printf("Invalid marks !!");
        return 1; // terminates the program when marks are invalid
    }
    // for marks classification
    if (marks >= 90)
    {
        printf("Excellent");
    }
    else if (marks >= 75)
    {
        printf("Good");
    }
    else if (marks >= 50)
    {
        printf("Average");
    }
    else
    {
        printf("Fail");
    }

    // return statement
    return 0;
}