// Demonstrate type casting in C

#include <stdio.h>  //for standard input and output functions

//main function
int main()
{
    //program description
    printf("-: Demonstration of Type Casting in C :-\n\n");


    // Implicit type casting

    //variable declaration
    int number = 10;
    float result;

    result = number;

    printf("Implicit Conversion\n");
    printf("Integer value : %d\n", number);
    printf("Float value   : %.2f\n\n", result);


    // Explicit type casting

    //variable declaration
    float decimal = 10.75f;
    int converted;

    converted = (int)decimal;

    printf("Explicit Type Casting\n");
    printf("Float value   : %.2f\n", decimal);
    printf("Integer value : %d\n", converted);

    return 0;
}