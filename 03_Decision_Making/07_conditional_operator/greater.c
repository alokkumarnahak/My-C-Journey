//Demonstration conditional operator
//Find greater of two numbers

//preprocessor directive
#include<stdio.h>

//main function
int main()  {

    //program description
    printf("-: Program to find greater of two numbers :-\n\n");

    //variable declaration
    int num1, num2;
    int greater;

    //input from user
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    //logic
    (num1 == num2) ? printf("Both numbers are equal.") : (num1 > num2) ? (greater = num1, printf("%d is greater than %d.", greater, num2)) : (greater = num2, printf("%d is greater than %d.", greater, num1));

    //return statement
    return 0;
}

