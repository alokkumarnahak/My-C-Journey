// Demonstration else-if-ladder statements
// Grade based on score

// preprocessor directive
#include <stdio.h>

// main function
int main()
{

    // program description
    printf("-: Grade based on score :-\n\n");

    // variable declaration
    int score;

    // input from user
    printf("Enter your score: "); // for print single % use %%
    scanf("%d", &score);

    // logic
    // checking valid marks
    if ((score > 100) || (score < 0))
    {
        printf("Invalid score !!");
        return 1; // terminates the program when marks are invalid
    }

    // for grade check
    int key = score / 10;

    switch (key)
    {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }
    printf(" Grade");

    // return statement
    return 0;
}