//basic user input program

//preprocessor directive
#include<stdio.h>   //for standard input and output functions


//main function
int main()  {

    //program description
    printf("-: Basic user input program :-\n\n");
    printf("Please folow the instructions otherwise it gives unexpected output\n");

    //variable deaclaration
    int num1;
    float num2;
    char ch;
    //Taking input from user
    printf("Enter a character: ");
    scanf("%c", &ch); //reading character input

    printf("Enter a float: ");
    scanf("%f", &num2); //reading float input

    printf("Enter an integer: ");
    scanf("%d", &num1); //reading integer input 



    //displaying the user input
    printf("\nYou entered character: %c\n", ch);   
    printf("You entered float: %f\n", num2); 
    printf("You entered integer: %d\n", num1);

    

    //return statement
    return 0;
    
}

// Note :- Unsigned means all non-negative range of a data type. So, we only print the maximum value for unsigned types and it starts from 0
