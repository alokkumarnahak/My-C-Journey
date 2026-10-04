// Demonstration of array rearrangement in C
// Rotate an array right by one position

#include <stdio.h>

int main()
{
    // program description
    printf("--- LEFT ROTATION ---\n\n");

    // variable declaration
    int size;

    // user input 
    printf("Enter array size: ");
    scanf("%d", &size);

    // valid size check
    if (size < 1)
    {
        printf("Error: Invalid array size!\n");
        return 1;
    }

    // array declaration
    int arr[size];

    // array input
    printf("Enter array elements:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printing arrray before rotation
    printf("\nArray before right rotation:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");


    // logic
    int temp = arr[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;

    // printing the new array
    printf("\nArray after right rotation:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
