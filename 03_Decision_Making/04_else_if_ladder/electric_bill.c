// Demonstration else-if-ladder statements
// Electricity-Bill Category

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Electricity-Bill Calculator :-\n\n");

    // variable declaration
    float units;
    float bill_amt = 0;

    // input from user
    printf("Enter consumed electricity(in units): ");
    scanf("%f", &units);

    // logic
    // for check valid age
    if (units < 0)
    {
        printf("Error: Invalid !!");
        return 1; // it terminates the program if the condition is true
    }
    // for age classification
    if (units <= 100)
    {
        bill_amt = units * 0.50;
    }
    else if (units <= 300)
    {
        bill_amt = (100 * 0.50) + ((units - 100) * 1.00);
    }
    else
    {
        bill_amt = (100 * 0.50) + (200 * 1.00) + ((units - 300) * 1.50);
    }

    // printing the output
    printf("Total Bill Amount: %.2f\n", bill_amt);

    // return statement
    return 0;
}