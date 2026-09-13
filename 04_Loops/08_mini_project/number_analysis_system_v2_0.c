// Making a mini project using loops
// Number Analysis System

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // variable declaration
    int number, choice;
    int temp;
    int count = 0;
    int sum = 0, remainder;
    int product = 1;
    int revNum = 0;
    int origNum;
    int isPrime;

    // Menu
    printf("========================================\n");
    printf("       NUMBER ANALYSIS SYSTEM v1.0\n");
    printf("========================================\n\n");

    // user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // menu description
    printf("\n------------- MENU ----------------\n");
    printf("1. Count digits\n");
    printf("2. Find digit sum\n");
    printf("3. Find digit product\n");
    printf("4. Reverse the number\n");
    printf("5. Check palindrome\n");
    printf("6. Check prime\n");
    printf("7. Find factors\n");
    printf("8. Find prime factors\n");
    printf("9. Exit\n");
    printf("------------------------------------\n\n");

    // choices
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // logic
    switch (choice)
    {
    case 1:
        temp = number;

        if (temp == 0)
        {
            count = 1;
        }
        else
        {
            while (temp > 0)
            {
                count++;
                temp /= 10;
            }
        }

        printf("\nNumber of digits : %d", count);
        break;

    case 2:
        temp = number;

        if (temp < 0)
        {
            temp = -temp;
        }

        while (temp > 0)
        {
            remainder = temp % 10;
            sum += remainder;
            temp /= 10;
        }

        printf("\nSum of digits : %d", sum);
        break;

    case 3:
        temp = number;

        if (temp < 0)
        {
            temp = -temp;
        }

        if (temp == 0)
        {
            product = 0;
        }
        else
        {
            while (temp > 0)
            {
                remainder = temp % 10;
                product *= remainder;
                temp /= 10;
            }
        }

        printf("\nProduct of digits : %d", product);
        break;

    case 4:
        temp = number;

        if (temp < 0)
        {
            temp = -temp;
        }

        while (temp > 0)
        {
            remainder = temp % 10;
            revNum = revNum * 10 + remainder;
            temp /= 10;
        }

        if (number < 0)
        {
            revNum = -revNum;
        }

        printf("\nReversed number : %d", revNum);
        break;

    case 5:
        origNum = number;
        temp = number;

        if (temp < 0)
        {
            temp = -temp;
        }

        while (temp > 0)
        {
            remainder = temp % 10;
            revNum = revNum * 10 + remainder;
            temp /= 10;
        }

        if (origNum < 0)
        {
            revNum = -revNum;
        }

        if (origNum == revNum)
        {
            printf("\n%d is a palindrome number", origNum);
        }
        else
        {
            printf("\n%d is not a palindrome number", origNum);
        }

        break;

    case 6:
        if (number <= 0)
        {
            printf("\nPlease enter a number greater than zero.");
            break;
        }
        else if (number == 1)
        {
            printf("\nNeither prime nor composite.");
            break;
        }
        else
        {
            isPrime = 1;

            for (int i = 2; i * i <= number; i++)
            {
                if (number % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
        {
            printf("\nPrime number.");
        }
        else
        {
            printf("\nNot a prime number.");
        }

        break;

    case 7:
        if (number <= 0)
        {
            printf("\nPlease enter a number greater than zero.");
            break;
        }
        else
        {
            printf("\nFactors : ");

            for (int i = 1; i <= number / 2; i++)
            {
                if (number % i == 0)
                {
                    printf("%d ", i);
                }
            }

            printf("%d", number);
        }

        break;

    case 8:
        if (number <= 0)
        {
            printf("\nPlease enter a number greater than zero.");
            break;
        }
        else
        {
            temp = number;

            printf("\nPrime Factors : ");

            for (int i = 2; i <= temp; i++)
            {
                while (temp % i == 0)
                {
                    printf("%d ", i);
                    temp /= i;
                }
            }
        }

        break;

    case 9:
        printf("\nExit");
        break;

    default:
        printf("\nInvalid Entry !!");
    }

    // return statement
    return 0;
}
