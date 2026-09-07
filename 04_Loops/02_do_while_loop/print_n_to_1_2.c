// Demonstrate do-while loop
// Program to print positive numbers from n to 1

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    int n;
    int i;

    // program description
    printf("--- Program to print positive numbers from n to 1 ---\n\n");

    // taking input from user
    printf("Enter n(positive) : ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input !");
        return 1;
    }
    
    i = n;

        // logic
        do
        {
            printf("%d\n", i);
            i--;
        } while (i > 0);

    // return statement
    return 0;
}