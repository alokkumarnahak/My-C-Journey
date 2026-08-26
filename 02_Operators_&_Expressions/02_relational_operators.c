// Demonstrate relational operators in C

//preprocessor directive
#include <stdio.h>  //for standard input and output functions

//main function
int main()
{
    //program description
    printf("-: Demonstrate relational operators in C :-\n\n");

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

    //printing the results of relational operations
    printf("a > b  : %d\n", a > b); //greater than
    printf("a < b  : %d\n", a < b); //less than
    printf("a >= b : %d\n", a >= b); //greater than or equal to
    printf("a <= b : %d\n", a <= b); //less than or equal to
    printf("a == b : %d\n", a == b); //equal to
    printf("a != b : %d\n", a != b); //not equal to

    //return statement
    return 0;
}