//Demonstration conditional operator
//Find absolute value

//preprocessor directive
#include<stdio.h>

//main function
int main()  {

    //program description
    printf("-: Program to find absolute value :-\n\n");

    //variable declaration
    int num;
    int abs_num;

    //input from user
    printf("Enter a number: ");
    scanf("%d",&num);

    //logic
    (num < 0)?(abs_num = -num,printf("Absolute value : %d", abs_num)):(abs_num = num,printf("Absolute value : %d",abs_num));

    //return statement
    return 0;
}


