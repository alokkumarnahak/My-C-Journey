//ASCII values of characters

//preprocessor directive
#include<stdio.h>   //for standard input and output functions


//main function
int main()  {

    //program description
    printf("-: ASCII values of characters :-\n\n");
    printf("Info: ASCII values ranges from 0 to 127.\n");

    //variable declaration
    char ch;

    printf("Enter a charcter : ");
    scanf("%c", &ch);

    //displaying the ASCII values
    printf("\nCharacter : %c\n",ch);
    printf("ASCII value : %d\n",ch);

    

    //return statement
    return 0;
    
}

