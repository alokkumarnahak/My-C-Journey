// Demonstrate bitwise operators in C

//preprocessor directive
#include <stdio.h>  //for standard input and output functions

//main function
int main()
{
    //program description
    printf("-: Demonstrate bitwise operators in C :-\n\n");

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

    //print bitwise operations
    printf("Bitwise AND (a & b) = %d\n", a & b);
    printf("Bitwise OR (a | b) = %d\n", a | b );
    printf("Bitwise XOR (a ^ b) = %d\n", a ^ b);
    printf("Bitwise NOT (~a) = %d\n", ~a);
    printf("Bitwise NOT (~b) = %d\n", ~b);
    printf("Left Shift (a << 1) = %d\n", a << 1);
    printf("Right Shift (a >> 1) = %d\n", a >> 1);
    printf("Left Shift (b << 1) = %d\n", b << 1);
    printf("Right Shift (b >> 1) = %d\n", b >> 1); 

    //return statement
    return 0;
}