//Demonstration if statements
//Program to find whether a number is divisible by 5 or not

//preprocessor directive
#include<stdio.h>

//main function
int main()  {

    //program description
    printf("-: Program to find whether a number is divisible by 5 or not :-\n\n");

    //variable declaration
    int number;

    //input from user
    printf("Enter a number: ");
    scanf("%d",&number);

    //logic
    if(number % 5 == 0)  {
        printf("The entered number is divisible by 5.");
        return 0;   //if the number is divisible by 5 then it terminates
    }
    
    //if the if statement will not execute
    printf("The entered number is not divisible by 5.");

    //return statement
    return 0;
}