// Demonstration if statements
// Program to find whether a person is eligible for voting or not

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Program to find whether a person is eligible for voting or not :-\n\n");

    // variable declaration
    int age;

    // input from user
    printf("Enter your age: ");
    scanf("%d", &age);

    // logic
    if (age >= 18)
    {
        printf("You are eligible for voting.");
        return 0; // if the age is greater than 18 then it terminates
    }

    // if the if statement will not execute
    printf("You are not eligible for voting.");

    // return statement
    return 0;
}