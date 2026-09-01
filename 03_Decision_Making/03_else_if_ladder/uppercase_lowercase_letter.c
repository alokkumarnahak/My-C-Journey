// Demonstration nested-if statements
// Check whether a character is a letter and then determine uppercase/lowercase

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Check letter and then uppercase or lowercase :-\n\n");

    // variable declaration
    char ch;

    // input from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // logic to determine smallest of three numbers
    if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    {
        if ((ch >= 'A') && (ch <= 'Z'))
            printf("Uppercase");
        else
            printf("Lowercase");
        printf(" Letter.");
    }
    else
    {
        printf("Not a letter !!");
    }

    // return statement
    return 0;
}