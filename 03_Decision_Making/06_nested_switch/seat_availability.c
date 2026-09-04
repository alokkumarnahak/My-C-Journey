// Demonstration of nested-switch statements
// Display available seats based on choice

//preprocessor directive
#include <stdio.h>

//main function
int main() {
    //variable declaration
    int mainChoice, subChoice;

    // Display Main Menu
    printf("--- SEAT-AVAILABILITY CHECKER ---\n\n");
    printf("1. Computer Science (CS)\n");
    printf("2. Mechanical Engineering (ME)\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &mainChoice);

    //logic
    switch (mainChoice) {
        case 1: // CS Department Category
            printf("\n--- Computer Science (CS) ---\n");
            printf("1. Artificial Intelligence\n");
            printf("2. Cyber Security\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("Seats available: 5\n");
                    break;
                case 2:
                    printf("Seats available: 12\n");
                    break;
                default:
                    printf("Error: Invalid sub-menu choice for Computer Science.\n");
            }
            break;

        case 2: // ME Department Category
            printf("\n--- Mechanical Engineering (ME) ---\n");
            printf("1. Robotics\n");
            printf("2. Fluid Dynamics\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("Seats available: 8\n"); // Added \n
                    break;
                case 2:
                    printf("Sorry, this subject is full.\n"); // Added \n
                    break;
                default:
                    printf("Error: Invalid sub-menu choice for Mechanical Engineering.\n"); // Updated error text
            }
            break;

        default:
            printf("Error: Invalid main menu choice.\n");
    }

    return 0;
}
