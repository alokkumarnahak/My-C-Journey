// C mini project
// expense calculator

// preprocessor directive
#include<stdio.h>

// main function
int main()
{
    // program description
    printf("EXPENSE CALCULATOR V1.0\n\n");

    // variable declaration
    int choice;
    float budget, rem_budget, expense, tax_perc = 0, tax = 0, disc_perc = 0, discount = 0, fin_exp = 0;

    printf("Enter your budget: ");
    scanf("%f", &budget);
    printf("Enter listed price: ");
    scanf("%f", &expense);

    rem_budget = budget;

    printf("\n===== EXPENSE CALCULATOR =====\n");
    printf("1. Calculate Tax\n");
    printf("2. Calculate Discount\n");
    printf("3. Calculate Expense\n");
    printf("4. Check Budget Status\n");
    printf("5. Categorize Expense\n");
    printf("6. Exit\n");
    
    key:
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter tax percentage: ");
            scanf("%f", &tax_perc);
            tax = expense * tax_perc / 100;
            printf("Tax Amount: %.2f", tax);
            break;
        
        case 2:
            printf("Enter discount percentage: ");
            scanf("%f", &disc_perc);
            discount = expense * disc_perc / 100;
            printf("Discount Amount: %.2f\n", discount);
            break;

        case 3:
            fin_exp = expense - (expense * disc_perc / 100) + (expense * tax_perc / 100);
            printf("Total Expense: %.2f\n", fin_exp);
            break;

        case 4:
            rem_budget = budget - fin_exp;
            printf("Budget Status:\n");
            printf("Remaining Budget: %.2f\n", rem_budget);
            printf("Total Expense: %.2f\n", fin_exp);
            break;

        case 5:
            if(expense < 1000 && expense > 0)
                printf("Small Expense\n");
            else if(expense > 1000 && expense < 10000)
                printf("Medium Expense\n");
            else
                printf("Large Expense\n");
            break;

        case 6:
            printf("Exit\n");
            return 0;
        
        default:
            printf("Invalid choice\n");
    }

    goto key;

    // return statement
    return 0;
}
