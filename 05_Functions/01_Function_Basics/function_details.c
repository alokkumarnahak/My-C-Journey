//Demonstration of functions in C
//function to greet users

//preprocessor directive 
#include<stdio.h>

//function declaration
void before();
void after();

//function definition
void before()   {
    printf("This function is defined before main().\n");
}

//main function 
int main( ) {
    //program description
    printf("Demonstrate how & where functions declared & defined\n\n");
    printf("->Functions should be declared before main().\n");
    printf("->We can't define functions inside main().\n->We can define before or after main().\n");
    printf("->We call functions inside main().\n\n");

    printf("Examples : \n");
    //function calling
    before();
    after();

	//return statement 
	return 0 ;
}

void after()    {
    printf("This function is defined after main().\n");
}
