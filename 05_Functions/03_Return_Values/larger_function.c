//Demonstration of return values in function
//function that returns larger number

//preprocessor directive
#include <stdio.h>

// Function declaration
int findLarger(int a, int b);

int main()
{
    //program description
    printf("--- Function that returns largest number ---\n\n");

    int result;

    result = findLarger(25, 40);

    printf("First Number  : 25\n");
    printf("Second Number : 40\n");
    printf("Larger Number : %d\n", result);

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
