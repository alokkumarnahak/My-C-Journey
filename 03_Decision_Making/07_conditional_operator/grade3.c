// Demonstration of Conditional Operator
// Grade of a Student

// Preprocessor directive
#include <stdio.h>

// Main function
int main()
{
    // Program description
    printf("-: Program to find grade :-\n\n");

    // Variable declaration
    int score;
    char grade;

    // Input from user
    printf("Enter your score : ");
    scanf("%d", &score);

    // Logic using conditional operator
    grade = (score >= 90) ? 'A' :(score >= 80) ? 'B' :(score >= 70) ? 'C' :(score >= 60) ? 'D' : 'F';

    // Output
    printf("Your grade is %c", grade);

    // Return statement
    return 0;
}
