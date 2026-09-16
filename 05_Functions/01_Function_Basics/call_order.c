// Demonstration of functions in C
// function call order

// preprocessor directive
#include <stdio.h>

// function declare and define
void one()
{
    printf("one\n");
}
void two()
{
    printf("two\n");
}
void three()
{
    printf("three\n");
}
void four()
{
    printf("four\n");
}
void five()
{
    printf("five\n");
}

// main function
int main()
{
    // program description
    printf("Demonstrate function\n\n");

    // function calling
    one();
    five();
    three();
    four();
    two();

    // return statement
    return 0;
}
