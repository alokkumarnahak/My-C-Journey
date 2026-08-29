//Demonstration of if statements
//Program to find whether a number is negative or not

//preprocessor directive
#include<stdio.h>

//main function
int main()  {

    //program description
    printf("-: Program to find whether a number is negative or not :-\n\n");

    //variable declaration
    int number;

    //input from user
    printf("Enter a number: ");
    scanf("%d",&number);

    //logic
    if(number < 0)  {
        printf("You entered a negative number.");
        return 0;   //if the number is negative then it terminates
    }
    
    //if the if statement will not execute
    printf("You entered a non-negative number.");

    //return statement
    return 0;
}