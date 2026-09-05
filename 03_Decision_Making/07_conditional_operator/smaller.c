//Demonstration conditional operator
//Find smaller of two numbers

//preprocessor directive
#include<stdio.h>

//main function
int main()  {

    //program description
    printf("-: Program to find smaller of two numbers :-\n\n");

    //variable declaration
    int num1, num2;
    int smaller;

    //input from user
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    //logic
    (num1 == num2) ? printf("Both numbers are equal.") : (num1 < num2) ? (smaller = num1, printf("%d is smaller than %d.", smaller, num2)) : (smaller = num2, printf("%d is smaller than %d.", smaller, num1));

    //return statement
    return 0;
}

