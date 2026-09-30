// Demonstration of array manipulation in C
// update an element

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- UPDATE AN ELEMENT ---\n\n");

    // array declaration and initialization
    int arr[100] = {1, 2, 3, 5};

    // variable declaration
    int n, key;
    int size = 4;

    // input position
    printf("Enter the position you want to update: ");
    scanf("%d", &n);

    if(n < 1 || n > size)    {
        printf("There is no element at that position.\n");
        return 0;
    }

    printf("Enter the new element: ");
    scanf("%d", &key);

    // logic
    arr[n - 1] = key;

    // display array
    printf("\nArray after deletion:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // return statement
    return 0;
}
