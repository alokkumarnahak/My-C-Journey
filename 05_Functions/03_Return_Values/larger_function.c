// Demonstration of return values in function
// function that returns larger number

// preprocessor directive
#include <stdio.h>

// Function declaration
int findLarger(int a, int b);

//main function
int main()
{
    //program description
    printf("--- Function that returns largest number ---\n\n");

    //variable declaration
    int result;

    //function calling
    result = findLarger(25, 40);

    //displaying output
    printf("First Number  : 25\n");
    printf("Second Number : 40\n");
    printf("Larger Number : %d\n", result);

    //return statement
    return 0;
}

// Function definition
int findLarger(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
