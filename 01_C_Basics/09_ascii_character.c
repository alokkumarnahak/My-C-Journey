//Characters of ASCII values

//preprocessor directive
#include<stdio.h>   //for standard input and output functions


//main function
int main()  {

    //program description
    printf("-: Characters of ASCII values :-\n\n");
    printf("Info: ASCII values ranges from 0 to 127.\n");

    //variable declaration
    int ascii;

    printf("Enter an ASCII value : ");
    scanf("%d", &ascii);

    //displaying the ASCII values
    printf("\nASCII value : %d\n",ascii);
    printf("Character : %c\n",ascii);

    

    //return statement
    return 0;
    
}

