//preprocessor directive 
#include<stdio.h>

//main function 
int main() {

	//Demonstration of sizeof data types in C
    printf("Demonstration of sizeof data types in C\n\n");

	//printthe size of data types
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of short: %zu bytes\n", sizeof(short));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));

	//return statement 
	return 0 ;
}