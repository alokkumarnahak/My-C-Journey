// Demonstration of array sorting in C
// Remove duplicate elements using sorting

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- REMOVE DUPLICATES USING SORTING ---\n\n");

    // variable declaratio 
    int size;

    // input array size
    printf("Enter array size: ");
    scanf("%d", &size);

    // check valid array size
    if (size < 1)
    {
        printf("Error: Invalid array size!\n");
        return 1;
    }

    // array declaration
    int arr[size];

    // input array elements
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // print array before sorting
    printf("\nArray before sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // sort array in ascending order
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

    // array after sorting
    printf("\n\nArray after sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // remove duplicates
    int newSize = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[newSize - 1])
        {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    // print array after removing duplicate elements
    printf("\n\nArray after removing duplicates:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }

    // return statement
    return 0;
}
