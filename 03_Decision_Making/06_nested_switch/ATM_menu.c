// Demonstration of nested-switch statements
// ATM menu based on choice

//preprocessor directive
#include <stdio.h>

//main function
int main() {
    //variable declaration
    int mainChoice, subChoice;
    double amount, withdraw, deposit;

    // Display Main Menu
    printf("--- ATM Menu ---\n\n");
    printf("1. Savings Account\n");
    printf("2. Current Account\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &mainChoice);

    switch (mainChoice) {
        case 1: // Savings Account Category
            amount = 10000.00;  //initialise the amount
            printf("\n--- Savings Account ---\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("Enter amount to be deposited: ");
                    scanf("%lf",&deposit);
                    amount += deposit; 
                    printf("Successfully deposited $%.2lf into your savings account.\n", deposit);
                    break;
                case 2:
                    printf("Enter amount to be withdrawn: ");
                    scanf("%lf",&withdraw);
                    amount -= withdraw;
                    printf("Successfully withdrew $%.2lf from your savings account.\n", withdraw);
                    break;
                default:
                    printf("Error: Invalid sub-menu choice for Savings Account.\n");
            }
            break;

        case 2: // Current Account Category
            amount = 20000.00;  // Initialize amount for Current account too
            printf("\n--- Current Account ---\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("Enter amount to be deposited: ");
                    scanf("%lf",&deposit);
                    amount += deposit; 
                    printf("Successfully deposited $%.2lf into your current account.\n", deposit);
                    break;
                case 2:
                    printf("Enter amount to be withdrawn: ");
                    scanf("%lf",&withdraw);
                    amount -= withdraw;
                    printf("Successfully withdrew $%.2lf from your current account.\n", withdraw);
                    break;
                default:
                    printf("Error: Invalid sub-menu choice for Current Account.\n");
            }
            break;

        default:
            printf("Error: Invalid main menu choice.\n");
    }

    return 0;
}

