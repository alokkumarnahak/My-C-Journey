// Demonstration of declaring and initializing a 2D array in C
// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- DECLARE AND INITIALIZE A 2D ARRAY ---\n\n");

    // declare and initialize a 2D array
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    // display the 2D array
    printf("Elements of the 2D array:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    // return statement
    return 0;
}

