//Demonstration of data types & variables in C

//preprocessor directive 
#include<stdio.h>

//global variable declaration
int year = 2026;
float length = 5.9f;
double width = 70.5;
char max_grade = 'O';

//main function 
int main() {

	//program descrription
	printf("-: Demonstration of data types & variables in C :-\n\n");

	//local variable declaration
	int age = 25;
	float height = 5.9f;
	double weight = 70.5;
	char grade = 'A';

	//print global variables
	printf("Year: %d\n", year);
	printf("Length: %f\n", length);
	printf("Width: %lf\n", width);
	printf("Max Grade: %c\n", max_grade);

	//print local variaables
	printf("Age: %d\n", age);
	printf("Height: %f\n", height);
	printf("Weight: %lf\n", weight);
	printf("Grade: %c\n", grade);

	//print the values of the variables with specific formatting
	printf("Height: %.2f\n", height); // Print height with two decimal places that's why we use %.2f
	printf("Weight: %.2lf\n", weight); //similar here we use %.2lf to print weight with two decimal places
	

	//return statement 
	return 0 ;
}