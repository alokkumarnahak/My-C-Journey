//Ranges of data types in C

//preprocessor directive
#include<stdio.h>   //for standard input and output functions
#include<limits.h> //for integer data type ranges
#include<float.h>  //for floating point data type ranges

//main function
int main()  {

    //program description
    printf("-: Ranges of data types in C :-\n\n");

    //displaying the ranges of data types

    //character data type ranges
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char: 0 to %u\n", UCHAR_MAX);

    //integer data type ranges
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0 to %u\n", USHRT_MAX);
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %lu\n", ULONG_MAX);

    //floating point data type ranges
    printf("float: %.10e to %.10e\n", FLT_MIN, FLT_MAX);
    printf("double: %.10e to %.10e\n", DBL_MIN, DBL_MAX);
    printf("long double: %.10Le to %.10Le\n", LDBL_MIN, LDBL_MAX);

    //return statement
    return 0;
    
}

// Note :- Unsigned means all non-negative range of a data type. So, we only print the maximum value for unsigned types and it starts from 0
