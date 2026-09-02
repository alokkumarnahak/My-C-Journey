// Demonstration else-if-ladder statements
// Grade based on marks

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Grade based on marks :-\n\n");

    // variable declaration
    int marks;

    // input from user
    printf("Enter marks (in %%): "); // for print single % use %%
    scanf("%d", &marks);

    // logic
    // checking valid marks
    if ((marks > 100) || (marks < 0))
    {
        printf("Invalid marks !!");
        return 1; // terminates the program when marks are invalid
    }
    // for grade check
    if (marks >= 90)
    {
        printf("A");
    }
    else if (marks >= 80)
    {
        printf("B");
    }
    else if (marks >= 70)
    {
        printf("C");
    }
    else if (marks >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    printf(" Grade");

    // return statement
    return 0;
}