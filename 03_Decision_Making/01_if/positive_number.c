//Demonstration if statements
//Program to find whether a number is positive or not

//preprocessor directive
#include<stdio.h>

//main function
int main()  {

    //program description
    printf("-: Program to find whether a number is positive or not :-\n\n");

    //variable declaration
    int number;

    //input from user
    printf("Enter a number: ");
    scanf("%d",&number);

    //logic for chrecking a 
    if(number > 0)  {
        printf("You entered a positive number.");
        return 0;   //if the number is positive then it terminates
    }
    
    //if the if statement will not execute
    printf("You entered a non-positive number.");
    

    //return statement
    return 0;
}
