// Demonstration of nested-switch statements
// convert weight based on choice

//preprocessor directive
#include <stdio.h>

//main function
int main() {
    //variable declaration
    int mainChoice, subChoice;
    double value, result;

    // Display Main Menu
    printf("--- MULTI-LEVEL UNIT CONVERTER ---\n\n");
    printf("1. Weight Converter\n");
    printf("2. Volume Converter\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &mainChoice);

    //logic
    switch (mainChoice) {
        case 1: // Weight Category
            printf("\n--- Weight Converter ---\n");
            printf("1. Kilograms to Pounds\n");
            printf("2. Pounds to Kilograms\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &subChoice);

            printf("Enter the value to convert: ");
            scanf("%lf", &value);

            switch (subChoice) {
                case 1:
                    result = value * 2.20462;
                    printf("%.2f kg = %.2f lbs\n", value, result);
                    break;
                case 2:
                    result = value / 2.20462;
                    printf("%.2f lbs = %.2f kg\n", value, result);
                    break;
                default:
                    printf("Error: Invalid sub-menu choice for Weight.\n");
            }
            break;

        case 2: // Volume Category
            printf("\n--- Volume Converter ---\n");
            printf("1. Litres to Millilitres\n");
            printf("2. Gallons to Litres\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &subChoice);

            printf("Enter the value to convert: ");
            scanf("%lf", &value);

            switch (subChoice) {
                case 1:
                    result = value * 1000;
                    printf("%.2f L = %.2f mL\n", value, result);
                    break;
                case 2:
                    result = value * 3.78541;
                    printf("%.2f Gallons = %.2f L\n", value, result);
                    break;
                default:
                    printf("Error: Invalid sub-menu choice for Volume.\n");
            }
            break;

        default:
            printf("Error: Invalid main menu choice.\n");
    }

    return 0;
}
