// Demonstration of array sorting in C
// bubble sort

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- BUBBLE SORT ---\n\n");

    // variable declaration
    int size;

    // user input
    printf("Enter array size: ");
    scanf("%d", &size);

    // array declaration
    int arr[size];

    // valid size check
    if (size < 1)
    {
        printf("Error: Invalid array size !");
        return 1;
    }

    // array input
    printf("Enter array elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // logic
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // printing the new array
    printf("\nArray after sorting\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // return statement
    return 0;
}
