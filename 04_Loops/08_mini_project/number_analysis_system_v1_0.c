//Making a mini project using loops
//Number Analysis System

//preprocessor directive
#include<stdio.h>

//main function
int main()
{
    //variable declaration
    int number, choice;
    int count = 0;
    int sum = 0, remainder;
    int product = 1;


    //Menu

    //variable declaration
    printf("========================================\n");
    printf("       NUMBER ANALYSIS SYSTEM\n");
    printf("========================================\n\n");

    //user input
    printf("Enter a number: ");
    scanf("%d", &number);

    //menu description
    printf("\n------------- MENU ----------------\n");
    printf("1. Count digits\n");
    printf("2. Find digit sum\n");
    printf("3. Find digit product\n");
    printf("4. Exit\n");
    printf("------------------------------------\n\n");

    //choices
    printf("Enter your choice:");
    scanf("%d",&choice);

    //logic
    switch(choice)  {
        case 1:
            while(number > 0)   {
                count++;
                number /= 10;
            }
            printf("\nNumber of digits : %d",count);
            break;
        
        case 2:
            while(number > 0)   {
                remainder = number % 10;
                sum += remainder;
                number /= 10;
            }
            printf("\nSum of digits : %d",sum);
            break;

        case 3:
            while(number > 0)   {
                remainder = number % 10;
                product *= remainder;
                number /= 10;
            }
            printf("\nProduct of digits : %d",product);
            break;

        case 4:
            printf("\nExit");
            break;
        default:
            printf("\nInvalid Entry !!");
    }

    //return statement
    return 0;
}
