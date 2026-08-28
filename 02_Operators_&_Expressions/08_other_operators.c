//Demonstrate other operators in C

//preprocessor directive 
#include<stdio.h>	//for standard input and output functions

//main function 
int main() {

    //program description
    printf("-: Demonstrate other operators in C :-");
    //variable declaration
    int a = 2;
    int *ptr = &a;  //data type *variable_name used to declare pointer & it stores the address of another variable
    int b,c;
    printf("',' operator used as a seprator .");

    //other operators
    printf("sizeof() : It gives the size of a data type in binary.\n");
    printf("sizeof(int): %zu\n",sizeof(int));
    printf("& operator : It gives the adress of a variable.\n");
	printf("&a : %p\n", &a);   //prints in hexadecimal format
    printf("ptr : %p\n", ptr);    //prints the address inside the address stored in pointer
    printf("*ptr : %d\n", *ptr);  //prints the value at that address which it directs

    printf("Other operators like dot(.) to directly access or modify members of a structure or union variable. \nArrow(->) to access members of a structure or union through a pointer.");
	//return statement 
	return 0 ;
}