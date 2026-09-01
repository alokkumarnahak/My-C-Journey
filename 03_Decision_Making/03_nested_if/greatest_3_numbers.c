// Demonstration nested-if statements
// Find the greatest of three numbers

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Find the greatest of three numbers :-\n\n");

    // variable declaration
    int num1, num2, num3;

    // input from user
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("Enter 3rd number: ");
    scanf("%d", &num3);

    // logic to determine greatest of three numbers
    if (num1 > num2)
    {
        if (num1 > num3)
            printf("%d is the greatest.", num1);
        else
            printf("%d is the greatest.", num3);
    }
    else
    {
        if (num2 > num3)
            printf("%d is the greatest.", num2);
        else
            printf("%d is the greatest.", num3);
    }

    // return statement
    return 0;
}
