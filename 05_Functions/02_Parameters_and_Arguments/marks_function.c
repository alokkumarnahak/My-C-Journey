// Demonstration of functions in C
// function to display marks

// preprocessor directive
#include <stdio.h>

// function declare and define
void displayMarks(int a, int b, int c)    {
    printf("==================\n");
    printf("Marks out of 100.\n");
    printf("Math : %d\n",a);
    printf("Physics : %d\n",b);
    printf("Chemistry : %d\n",c);
    printf("==================\n");
}

// main function
int main()
{
    // program description
    printf("Demonstrate function\n\n");

    //variable declaration
    int math = 50;
    int physics = 96;
    int chemistry = 84; 

    // function calling
    displayMarks(math, physics, chemistry);

    // return statement
    return 0;
}
