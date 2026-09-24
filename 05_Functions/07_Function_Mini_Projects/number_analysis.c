// Demonstration of function in C
// Mini project - Student marks calculator

// preprocessor directive 
#include<stdio.h>

// function prototype
int countDigit(int n);
int digitSum(int n);
int digitProduct(int n);


// main function
int main()  {
    // variable declaration
    int number;
    int choice;

    // function definition
    printf("========== NUMBER ANALYSIS SYSTEM ==========\n\n");

    // user input
    printf("Enter a nummber: ");
    scanf("%d", &number);

    printf("\n\n------------- MENU ----------------\n");
    printf("1. Count digits\n");
    printf("2. Find digit sum\n");
    printf("3. Find digit product\n");
    
    printf("10. Exit\n");
    printf("-----------------------------------\n\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nNumber of digits: %d", countDigit(number));
        break;
    
    case 2:
        printf("\nSum of digits: %d", digitSum(number));
        break;
    
    case 3:
        printf("\nProduct of digits: %d", digitProduct(number));
        break;

    case 10:
        return 0;
    
    default:
        printf("\nInvalid Input !");
        break;
    }

}

// function declaration
int countDigit(int n)   {
    int count = 0;
    while(n > 0)    {
        n /= 10;
        count++;
    }
    return count;
}

int digitSum(int n) {
    int sum = 0;
    int remainder;
    while(n > 0)    {
        remainder = n % 10;
        n /= 10;
        sum += remainder;
    }
    return sum;
}

int digitProduct(int n) {
    int product = 1;
    int remainder;
    while(n > 0){
        remainder = n % 10;
        n /= 10;
        product *= remainder;
    }
    return product;
}
