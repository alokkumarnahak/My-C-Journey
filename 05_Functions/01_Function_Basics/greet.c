//Demonstration of functions in C
//function to greet users

//preprocessor directive 
#include<stdio.h>

//function declaration
void greet();

//function definition
void greet()   {
    printf("Welcome to 'MY-C-Journey'.\n");
}

//main function 
int main( ) {
    //program description
    printf("Demonstrate function\n\n");

    //function calling
    greet();
	
	//return statement 
	return 0 ;
}
