// Demonstrate logical operators in C

//preprocessor directive
#include <stdio.h>  //for standard input and output functions

//main function
int main()
{
    //program description
    printf("-: Demonstrate logical operators in C :-\n\n");

    //variable declaration
    int a;
    int b;

    //input from user
    printf("Enter first number(a): ");
    scanf("%d", &a);
    printf("Enter second number(b): ");
    scanf("%d", &b);

    //printing the values of a and b
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);
    printf("It prints 1 for true and 0 for false\n\n");

    //printing the results of logical operations
    printf("a && b : %d\n", a && b); //logical AND
    printf("a || b : %d\n", a || b); //logical OR
    printf("!a     : %d\n", !a);     //logical NOT
    printf("!b     : %d\n", !b);     //logical NOT

    //return statement
    return 0;
}