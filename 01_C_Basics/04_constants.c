//preprocessor directive 
#include<stdio.h>

//main function 
int main() {

	//Demonstration of constants in C
	printf("Demonstration of constants in C\n\n");

    //constant declaration
    #define MAX_LENGTH 50
    #define height 5.9f
    const int MAX_SIZE = 100;
    const float PI = 3.14159;

    //print the values of the constants
    printf("MAX_LENGTH: %d\n", MAX_LENGTH);
    printf("height: %f\n", height);
    printf("MAX_SIZE: %d\n", MAX_SIZE);
    printf("PI: %.5f\n", PI);

	
	//return statement 
	return 0 ;
}