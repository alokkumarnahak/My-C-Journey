// Demonstration of array manipulation in C
// insert at specific position

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- INSERT AT SPECIFIC POSITION ---\n\n");

    // array declaration and initialization
    int arr[100] = {1, 2, 3, 5};

    // variable declaration
    int key, n;
    int size = 4;

    // input key element to insert
    printf("Enter the element you want to insert: ");
    scanf("%d", &key);
    printf("Enter the specific position: ");
    scanf("%d", &n);

    // logic
    for (int i = size - 1; i >= n - 1; i--)
        {
            arr[i + 1] = arr[i];
        }

    arr[n - 1] = key;
    size++;

    // display array
    printf("\nArray after insertion:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // return statement
    return 0;
}
