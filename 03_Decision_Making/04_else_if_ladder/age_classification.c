// Demonstration else-if-ladder statements
// Age-Group Classification

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Age-Group Classification :-\n\n");

    // variable declaration
    int age;

    // input from user
    printf("Enter age: ");
    scanf("%d", &age);

    // logic
    // for check valid age
    if (age < 0)
    {
        printf("Error: Enter valid age !!");
        return 1; // it terminates the program if the condition is true
    }
    if (age >= 122)
    {
        printf("Error: You reached the maximum age record...!");
        return 1; // it terminates the program if the condition is true
    }
    // for age classification
    if (age < 13)
    {
        printf("Child");
    }
    else if (age < 20)
    {
        printf("Teenager");
    }
    else if (age < 60)
    {
        printf("Adult");
    }
    else
    {
        printf("Senior Citizen");
    }

    // return statement
    return 0;
}
