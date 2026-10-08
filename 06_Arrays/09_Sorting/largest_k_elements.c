// Demonstration of array sorting in C
// Find the largest k elements in an array

#include <stdio.h>

int main()
{
    // program description
    printf("--- LARGEST K ELEMENTS ---\n\n");

    // variable declaration
    int size, k;

    // array input from user
    printf("Enter array size: ");
    scanf("%d", &size);

    // valid array size check
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

    // position input from user
    printf("Enter value of k: ");
    scanf("%d", &k);

    // valid position check
    if (k < 1 || k > size)
    {
        printf("Error: Invalid value of k!\n");
        return 1;
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

    // output the largest k elements
    printf("\nLargest %d elements:\n", k);

    for (int i = size - 1; i >= size - k; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
