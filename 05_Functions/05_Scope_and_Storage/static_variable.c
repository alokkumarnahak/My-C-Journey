// Demonstration of static variables

// preprocessor directive
#include <stdio.h>

// function declaration
void counter();

// main function
int main()
{
    // function calls
    counter();
    counter();
    counter();
    counter();
    counter();

    // return statement
    return 0;
}

// function definition
void counter()
{
    // static variable
    static int count = 0;

    // increment count
    count++;
    printf("Function Call %d -> Count: %d\n", count, count);
}