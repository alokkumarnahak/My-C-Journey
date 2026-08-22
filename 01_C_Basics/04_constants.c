//Demonstration of constants in C


//preprocessor directive 
#include<stdio.h>


//global constants declaration
#define size 100 
#define length 6.5f
#define grade 'A'
const int max_size = 1000;
const float max_length = 10.5f;
const char max_grade = 'O';

//main function 
int main() {
    
    //program description
	printf("Demonstration of constants in C\n\n");

    //local constant declaration
    #define MAX_LENGTH 50
    #define height 5.9f
    const int MAX_SIZE = 100;
    const float PI = 3.14159;
    //Note :  we can also declare double and character.

    //print the values of global constants
    printf("size: %d\n", size);
    printf("length: %.2f\n", length);
    printf("grade: %c\n", grade);
    printf("max_size: %d\n", max_size);
    printf("max_length: %.2f\n", max_length);
    printf("max_grade: %c\n", max_grade); 


    //print the values of local constants
    printf("MAX_LENGTH: %d\n", MAX_LENGTH);
    printf("height: %f\n", height);
    printf("MAX_SIZE: %d\n", MAX_SIZE);
    printf("PI: %.5f\n", PI);

	
	//return statement 
	return 0 ;
}