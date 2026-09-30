// Demonstration of array manipulation in C
// insert at end

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- INSERT AT END ---\n\n");

    // array declaration and initialization
    int arr[100] = {1, 2, 3, 5};

    // variable declaration
    int key;
    int size = 4;

    // input key element to insert
    printf("Enter the element you want to insert: ");
    scanf("%d", &key);

    // logic
    arr[size] = key;
    size++;

    // display array
    printf("\nArray after insertion:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    // return statement
    return 0;
}
