// Demonstrate conditional operators in C

//preprocessor directive
#include <stdio.h>  //for standard input and output functions

//main function
int main()
{
    //program description
    printf("-: Demonstrate conditional operators in C :-\n\n");

    printf("Find the largest among two numberes using conditional operator\n");

    //variable declaration
    int a;
    int b;

    //input from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    (a > b)?(printf("The largest number is: %d", a)):(printf("The largest number is: %d", b));
    
    
    //return statement
    return 0;
}