// Demonstration else-if-ladder statements
// Income-Tax Category

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Income-Tax Calculator :-\n\n");

    // variable declaration
    float income;
    float tax = 0;

    // input from user
    printf("Enter annual income(in rupees): ");
    scanf("%f", &income);

    // logic
    // for check valid age
    if (income < 0)
    {
        printf("Error: Invalid !!");
        return 1; // it terminates the program if the condition is true
    }
    // for age classification
    if (income <= 10000)
    {
        tax = 0;
    }
    else if (income <= 50000)
    {
        tax = (income - 10000) * 0.10;
    }
    else
    {
        tax = (40000 * 0.10) + ((income - 50000) * 0.20);
    }

    // printing the output
    printf("Total Tax Amount: %.2f\n", tax);

    // return statement
    return 0;
}
