//Demonstration if statements
//Program to check whether a character is uppercase or not

//preprocessor directive
#include<stdio.h>

//main function
int main()  {

    //program description
    printf("-: Program to check whether a character is uppercase or not :-\n\n");

    //variable declaration
    char character;

    //input from user
    printf("Enter an english alphabet: ");
    scanf("%c",&character);

    //logic
    if((character >= 'A')&&(character <= 'Z'))  {
        printf("The entered character is upper case.");
        return 0;   //if the character is uppercase then it terminates
    }

    //if the if statement will not execute
    printf("The entered character is not upper case.");
    

    //return statement
    return 0;
}