// Demonstrate increment and decrement operators in C

//preprocessor directive
#include <stdio.h>  //for standard input and output functions

//main function
int main()
{
    //program description
    printf("-: Demonstrate increment and decrement operators in C :-\n\n");

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

    //printing the results of increment and decrement operations
    printf("Postincrement and Postdecrement:\n");

    printf("a++ : %d\n", a++); //postincrement operator
    printf("Now a becomes : %d\n", a); //printing the new value of a after increment

    printf("b++ : %d\n", b++); //postincrement operator
    printf("Now b becomes : %d\n", b); //printing the new value of b after increment

    printf("a-- : %d\n", a--); //postdecrement operator
    printf("Now a becomes : %d\n", a); //printing the new value of a after decrement

    printf("b-- : %d\n", b--); //postdecrement operator
    printf("Now b becomes : %d\n", b); //printing the new value of b after decrement

    printf("Note: The value of the variable in postincrement and postdecrement is incremented or decremented after being used.\n");

    printf("\nPreincrement and Predecrement:\n");

    printf("++a : %d\n", ++a); //preincrement operator
    printf("Now a becomes : %d\n", a); //printing the new value of a after increment

    printf("++b : %d\n", ++b); //preincrement operator
    printf("Now b becomes : %d\n", b); //printing the new value of b after increment

    printf("--a : %d\n", --a); //predecrement operator
    printf("Now a becomes : %d\n", a); //printing the new value of a after decrement

    printf("--b : %d\n", --b); //predecrement operator
    printf("Now b becomes : %d\n", b); //printing the new value of b after decrement

    printf("Note: The value of the variable in preincrement and predecrement is incremented or decremented before being used.\n");

    //return statement
    return 0;
}