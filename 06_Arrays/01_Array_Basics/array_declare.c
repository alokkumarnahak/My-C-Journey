// Demonstration of of arrays in C
// array declaration and initialisation

// preprocessor directive
#include<stdio.h>

// main function
int main()  {

    // Arrays declaration

    // declare and initialise at once
    int arr1[] = {1, 2, 3};
    float arr2[] = {2.5, 3.1, 5.4};
    char str1[] = {'a', 'b', '1', ' ', '&'};     // array of characters is called as string

    // declare with size
    int arr3[4];
    float arr4[2];
    char str2[3];

    // initialising the arrays

    // Note :- array indexing starts from 0 upto size-1
    arr3[0] = 1;
    arr3[1] = 2;
    arr3[3] = 3;
    arr3[4] = 4;

    arr4[0] = 0.5;
    arr4[1] = 1.5;

    str2[0] = 'a';
    str2[1] = '1';

    printf("\nArrays are declared.\n");
    // return statement
    return 0 ;
}
