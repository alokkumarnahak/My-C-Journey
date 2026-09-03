#include <stdio.h>

int main() {
    int choice;
    double inputTemp, convertedTemp;

    // Display the menu
    printf("--- TEMPERATURE CONVERTER ---\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Process user input based on choice
    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &inputTemp);
            
            // Formula: F = (C * 9/5) + 32
            convertedTemp = (inputTemp * 9.0 / 5.0) + 32.0;
            printf("%.2f Celsius = %.2f Fahrenheit\n", inputTemp, convertedTemp);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &inputTemp);
            
            // Formula: C = (F - 32) * 5/9
            convertedTemp = (inputTemp - 32.0) * 5.0 / 9.0;
            printf("%.2f Fahrenheit = %.2f Celsius\n", inputTemp, convertedTemp);
            break;

        default:
            // Handles any choice that is not 1 or 2
            printf("Error: Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
