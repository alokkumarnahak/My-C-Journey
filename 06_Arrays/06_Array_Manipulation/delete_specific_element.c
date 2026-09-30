// Demonstration of array manipulation in C
// delete from a specific position

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- DELETE FROM SPECIFIC POSITION ---\n\n");

    // array declaration and initialization
    int arr[100] = {1, 2, 3, 5};

    // variable declaration
    int n;
    int size = 4;

    // input position
    printf("Enter the position you want to delete: ");
    scanf("%d", &n);

    if(n > size)    {
        printf("There is no element at that position.\n");
        return 0;
    }

    // logic
    for (int i = n - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    // display array
    printf("\nArray after deletion:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // return statement
    return 0;
}
