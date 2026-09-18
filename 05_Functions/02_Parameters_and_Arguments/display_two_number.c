// Demonstration of functions in C
// function display numbers

// preprocessor directive
#include <stdio.h>

// function declare and define
void displayTwoNumbers(int a, int b)    {
    printf("Number 1 : %d\n",a);
    printf("Number 2 : %d\n",b);
}

// main function
int main()
{
    // program description
    printf("Demonstrate function\n\n");

    //variable declaration
    int num1, num2;

    // function calling
    displayTwoNumbers(5,7);

    //taking input
    printf("Enter two numbers :-\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    displayTwoNumbers(num1, num2);

    // return statement
    return 0;
}
