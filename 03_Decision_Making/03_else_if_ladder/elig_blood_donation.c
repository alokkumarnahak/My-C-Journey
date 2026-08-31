// Demonstration nested-if statements
// check eligibility for blood donation

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Eligibility for blood donation :-\n\n");

    // variable declaration
    int age, weight;

    // input from user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight: ");
    scanf("%d", &weight);

    // logic to determine smallest of three numbers
    if ((age > 18) && (age < 61))
    {
        if (weight >= 50)
            printf("You are eligible.");
        else
            printf("You are not eligible.");
    }
    else
    {
        printf("You are not eligible.");
    }

    // return statement
    return 0;
}