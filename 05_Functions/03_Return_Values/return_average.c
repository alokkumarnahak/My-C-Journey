// Demonstration of return values in function
// function that returns average as a float

// preprocessor directive
#include <stdio.h>

// Function declaration
float calculateAverage(int a, int b, int c);

// main function
int main()
{
    // variable declaration
    int a, b, c;
    float average;

    // user input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // function call
    average = calculateAverage(a, b, c);

    // output
    printf("\n========== AVERAGE REPORT ==========\n");
    printf("First Number  : %d\n", a);
    printf("Second Number : %d\n", b);
    printf("Third Number  : %d\n", c);
    printf("Average       : %.2f\n", average);
    printf("====================================\n");

    // return statement
    return 0;
}

// Function definition
float calculateAverage(int a, int b, int c)
{
    float average;

    average = (a + b + c) / 3.0;

    return average;
}
