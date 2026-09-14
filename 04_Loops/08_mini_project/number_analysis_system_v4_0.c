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
    int isPrime;
    int newNum = 0;
    int factorial;
    int largest;
    int smallest;

    // Menu
    printf("========================================\n");
    printf("       NUMBER ANALYSIS SYSTEM v4.0\n");
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
    printf("9. Check armstrong\n");
    printf("10. Check strong number\n");
    printf("11. Check perfect number\n");
    printf("12. Count even digits.\n");
    printf("13. Count odd digits.\n");
    printf("14. Find largest digit.\n");
    printf("15. Find smallest digit.\n");
    printf("16. Exit\n");
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

        if (number == revNum)
        {
            printf("\n%d is a palindrome number", number);
        }
        else
        {
            printf("\n%d is not a palindrome number", number);
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
        }
        else
        {
            printf("\nFactors : ");

            for (int i = 1; i * i <= number / 2; i++)
            {
                if (number % i == 0)
                {
                    printf("%d ", i);

                    if (i != number / i)
                    {
                        printf("%d ", number / i);
                    }
                }
            }
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

            for (int i = 2; i * i <= temp; i++)
            {
                while (temp % i == 0)
                {
                    printf("%d ", i);
                    temp /= i;
                }
            }
            if (temp > 1)
            {
                printf("%d", temp);
            }
        }
        break;

    case 9:
        if (number < 0)
        {
            printf("\nPlease enter a non-negative number.");
            break;
        }

        if (number == 0)
        {
            printf("It is an armstrong number.");
            break;
        }
        else
        {
            temp = number;

            while (temp > 0)
            {
                count++;
                temp /= 10;
            }

            temp = number;

            while (temp > 0)
            {
                remainder = temp % 10;

                factorial = 1;

                for (int i = 1; i <= count; i++)
                {
                    factorial = factorial * remainder;
                }

                newNum = newNum + factorial;

                temp /= 10;
            }

            if (newNum == number)
            {
                printf("\nIt is an armstrong number.");
            }
            else
            {
                printf("\nIt is not an armstrong number.");
            }
        }

        break;

    case 10:
        if (number <= 0)
        {
            printf("\nPlease enter a number greater than zero.");
            break;
        }
        else
        {
            temp = number;

            while (temp > 0)
            {
                remainder = temp % 10;

                factorial = 1;

                for (int i = 1; i <= remainder; i++)
                {
                    factorial = factorial * i;
                }

                sum = sum + factorial;

                temp = temp / 10;
            }

            // checking Strong number
            if (sum == number)
            {
                printf("%d is a Strong number.\n", number);
            }
            else
            {
                printf("%d is not a Strong number.\n", number);
            }
        }
        break;

    case 11:
        if (number <= 0)
        {
            printf("\nPlease enter a number greater than zero.");
            break;
        }
        else
        {
            for (int i = 1; i <= number / 2; i++)
            {
                if (number % i == 0)
                {
                    sum += i;
                }
            }
            if (sum == number)
            {
                printf("\n%d is a perfect number.", number);
            }
            else
            {
                printf("\n%d is not a perfect number.", number);
            }
        }
        break;

    case 12:
        if (number == 0)
            printf("0 has 1 even digit.");
        else
        {
            temp = number;
            if (temp < 0)
                temp = -temp;
            while (temp > 0)
            {
                remainder = temp % 10;
                if (remainder % 2 == 0)
                {
                    count++;
                }

                temp /= 10;
            }

            printf("\n%d has %d even digits.", number, count);
        }
        break;

    case 13:
        if (number == 0)
            printf("0 has 0 odd digit.");
        else
        {
            temp = number;
            if (temp < 0)
                temp = -temp;
            while (temp > 0)
            {
                remainder = temp % 10;
                if (remainder % 2 != 0)
                {
                    count++;
                }

                temp /= 10;
            }

            printf("\n%d has %d odd digits.", number, count);
        }
        break;

    case 14:
        temp = number;
        if (temp < 0)
            temp = -temp;

        largest = temp % 10;
        while (temp > 0)
        {
            remainder = temp % 10;
            if (remainder >= largest)
            {
                largest = remainder;
            }

            temp /= 10;
        }
        printf("%d is the largest digit.", largest);

        break;

    case 15:
        temp = number;
        if (temp < 0)
            temp = -temp;

        smallest = temp % 10;
        while (temp > 0)
        {
            remainder = temp % 10;
            if (remainder <= smallest)
            {
                smallest = remainder;
            }

            temp /= 10;
        }
        printf("%d is the smallest digit.", smallest);

        break;

    case 16:
        printf("\nExit");
        break;

    default:
        printf("\nInvalid Entry !!");
    }

    // return statement
    return 0;
}
