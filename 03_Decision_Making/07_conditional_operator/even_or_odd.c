//Demonstration conditional operator
//Check wether a number is even or odd

//preprocessor directive
#include<stdio.h>

//main function
int main()  {

    //program description
    printf("-: Program to find a number is even or odd :-\n\n");

    //variable declaration
    int num;

    //input from user
    printf("Enter a number: ");
    scanf("%d",&num);

    //logic
    (num % 2 == 0)?printf("Even !"):printf("Odd !");

    //return statement
    return 0;
}

