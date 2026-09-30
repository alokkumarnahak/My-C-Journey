// Demonstration of array manipulation in C
// delete last element

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- DELETE LAST ELEMENT ---\n\n");

    // array declaration and initialization
    int arr[100] = {1, 2, 3, 5};

    // variable declaration
    int size = 4;

    // logic
    size--;

    // display array
    printf("Array after deletion:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // return statement
    return 0;
}
