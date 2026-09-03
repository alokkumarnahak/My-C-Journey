/*Question 1: Create a geometry tool that offers a menu:
1. Circle, 2. Rectangle, 3. Triangle. Based on the selection,
 ask for the required dimensions (e.g., radius for circle) and calculate the area.*/

// Demonstration of switch statements
// Area and perimeter calculator

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Area & perimeter calculator :-\n\n");

    // variable declaration
    int key;
    float area;
    float perimeter;

    // input from user
    printf("Enter a number: \n1 for Square . \n2 for rectangle . \n3 for circle . \n");
    scanf("%d", &key);

    printf("\n");

    // checking valid input
    if ((key != 1) || (key != 2) || (key != 3))
    {
        printf("Invalid input !!");
        return 1;
    }

    // logic for valid input
    switch (key)
    {
    case 1:
        printf("Square :-\n");
        float side;
        printf("Enter side(in cm): ");
        scanf("%f", &side);
        area = side * side;
        perimeter = 4 * side;
        break;
    case 2:
        printf("Rectangle :-\n");
        float length, breadth;
        printf("Enter length(in cm): ");
        scanf("%f", &length);
        printf("Enter breadth(in cm): ");
        scanf("%f", &breadth);
        area = length * breadth;
        perimeter = 2 * (length + breadth);
        break;
    case 3:
        printf("Circle :-\n");
        float radius;
        printf("Enter radius(in cm): ");
        scanf("%f", &radius);
        area = 3.14159 * radius * radius;
        perimeter = 2 * 3.14159 * radius;
        break;
    }
    printf("\nPerimeter: %.2f\n", perimeter);
    printf("Area: %.2f", area);

    // return statement
    return 0;
}