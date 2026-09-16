//Demonstration of functions in C
//function to show code reusability

//preprocessor directive 
#include<stdio.h>

//function declaration
void line();

//function definition
void line()   {
    printf("--------------------------\n");
}

//main function 
int main( ) {
    //program description
    printf("Demonstrate function\n\n");

    //function calling
    line();
    printf("My-C-Journey\n");
    line();
    printf("C Functions\n");
    line();
	
	//return statement 
	return 0 ;
}
