//Demonstration if statements
//Program to find whether a number is greater than 100 or not

//preprocessor directive
#include<stdio.h>

//main function
int main()  {

    //program description
    printf("-: Program to find whether a number is greater than 100 or not :-\n\n");

    //variable declaration
    int number;

    //input from user
    printf("Enter a number: ");
    scanf("%d",&number);

    //logic
    if(number > 100)  {
        printf("The entered number is greater than 100.");
        return 0;   //if the number is greater than 100 then it terminates
    }

    //if the if statement will not execute
    printf("The entered number is not greater than 100.");
    

    //return statement
    return 0;
}