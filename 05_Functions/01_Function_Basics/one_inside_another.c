//Demonstration of functions in C
//function call by another

//preprocessor directive 
#include<stdio.h>

//function declaration
void Firstmsg();
void Secondmsg();

//function definition
void Firstmsg()   {
    printf("First message.\n");
    Secondmsg();
}
void Secondmsg()    {
    printf("Second message inside first.\n");
}

//main function 
int main( ) {
    //program description
    printf("Demonstrate function\n\n");

    //function calling
    Firstmsg();
	
	//return statement 
	return 0 ;
}
