// Demonstration of array manipulation in C
// reverse an array

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- REVERSE AN ARRAY ---\n\n");

    // array declaration and initialization
    int arr[100] = {1, 2, 3, 5};

    // variable declaration
    int size = 4;
    int temp;

    // logic
    for(int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    // display array
    printf("Array after reversal:\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // return statement
    return 0;
}
