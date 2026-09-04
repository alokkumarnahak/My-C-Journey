// Demonstration of nested-switch statements
// distinct units of measurement

//preprocessor directive
#include <stdio.h>

//main function
int main() {
    //variable declaration
    int mainChoice, subChoice;
    double value, result;

    // Display Main Menu
    printf("--- MULTI-LEVEL UNIT MEASUREMENT ---\n\n");
    printf("1. Speed\n");
    printf("2. Data Transfer Rate\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &mainChoice);

    //logic
    switch (mainChoice) {
        case 1: // Speed Category
            printf("\n--- Speed ---\n");
            printf("1. Kilometres per hour (km/h) to Miles per hour (mph)\n");
            printf("2. Miles per hour (mph) to Kilometres per hour (km/h)\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &subChoice);

            printf("Enter the value to convert: ");
            scanf("%lf", &value);

            switch (subChoice) {
                case 1:
                    result = value * 0.621371;
                    printf("%.3lf km/h = %.3lf mph\n", value, result);
                    break;
                case 2:
                    result = value / 0.621371;
                    printf("%.3lf mph = %.3lf km/h\n", value, result);
                    break;
                default:
                    printf("Error: Invalid sub-menu choice for Speed.\n");
            }
            break;

        case 2: // Data Transfer Rate Category
            printf("\n--- Data Transfer Rate ---\n");
            printf("1. Megabits per second (Mbps) to Megabytes per second (MB/s)\n");
            printf("2. Megabytes per second (MB/s) to Megabits per second (Mbps)\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &subChoice);

            printf("Enter the value to convert: ");
            scanf("%lf", &value);

            switch (subChoice) {
                case 1:
                    result = value / 8;
                    printf("%.3lf Mbps = %.3lf MB/s\n", value, result);
                    break;
                case 2:
                    result = value * 8;
                    printf("%.3lf MB/s = %.3lf Mbps\n", value, result);
                    break;
                default:
                    printf("Error: Invalid sub-menu choice for Data Transfer Rate.\n");
            }
            break;

        default:
            printf("Error: Invalid main menu choice.\n");
    }

    return 0;
}
