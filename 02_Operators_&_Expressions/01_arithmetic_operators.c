//Demonstration of Arithmetic Operators in C
 
#include<stdio.h> //for standard input and output functions

//main function 
int main( ) {
	printf("-: Demonstration of Arithmetic Operators in C :-\n\n");

	//variable declaration
	int number1;
	int number2;
	float division;	//division of two integers can be float
	int multiplication;
	int modulus;	// % operator gives the remainder value
	int addition;
	int subtraction;

	//taking input from user
	printf("Enter first number: ");
	scanf("%d", &number1);
	printf("Enter second number: ");
	scanf("%d", &number2);

	//operations
	division = (float)number1 / number2;	//division
	multiplication = number1 * number2;	//multiplication
	modulus = number1 % number2;	//modulus
	addition = number1 + number2;	//addition
	subtraction = number1 - number2;	//subtraction

	//printing the results
	printf("\nDivision: %.2f\n",division);
	printf("Multiplication: %d\n",multiplication);
	printf("Modulus: %d\n",modulus);
	printf("Addition: %d\n",addition);
	printf("Subtraction: %d\n",subtraction);

	//return statement 
	return 0 ;
}
