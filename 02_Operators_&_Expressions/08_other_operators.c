//Demonstrate other operators in C

//preprocessor directive 
#include<stdio.h>	//for standard input and output functions

//main function 
int main() {

    //program description
    printf("-: Demonstrate other operators in C :-\n\n");
    //variable declaration
    int a = 2;
    int *ptr = &a;  //data type *variable_name used to declare pointer & it stores the address of another variable
    int b,c;
    printf("1. ',' operator used as a seprator .\n");

    //other operators
    printf("2. sizeof() : It gives the size of a data type in binary.\n");
    printf("   sizeof(int): %zu\n\n",sizeof(int));
    printf("3. & operator : It gives the adress of a variable.\n");
	printf("   &a : %p\n", &a);   //prints in hexadecimal format
    printf("   ptr : %p\n\n", ptr);    //prints the address inside the address stored in pointer
    printf("4. * operator : It is used to make a variable that stores address on another variable.\n");
    printf("   *ptr : %d\n\n", *ptr);  //prints the value at that address which it directs

    printf("5. Other operators like dot(.) to directly access or modify members of a structure or union variable. \n6. Arrow(->) to access members of a structure or union through a pointer.");
	//return statement 
	return 0 ;
}