// Demonstration of array rearrangement in C
// Find common elements in two arrays

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- FIND COMMON ELEMENTS ---\n\n");

    // variable declaration
    int size1, size2;

    // first array size input
    printf("Enter size of first array: ");
    scanf("%d", &size1);

    // valid size check
    if (size1 < 1)
    {
        printf("Error: Invalid array size!\n");
        return 1;
    }

    // first array declaration
    int arr1[size1];

    // first array input
    printf("Enter first array elements:\n");

    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // second array size input
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    // valid size check
    if (size2 < 1)
    {
        printf("Error: Invalid array size!\n");
        return 1;
    }

    // second array declaration
    int arr2[size2];

    // second array input
    printf("Enter second array elements:\n");

    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // logic
    int found;
    int alreadyPrinted;
    int commonCount = 0;

    printf("\nCommon elements:\n");

    for (int i = 0; i < size1; i++)
    {
        found = 0;
        alreadyPrinted = 0;

        // check whether the element was already processed
        for (int j = 0; j < i; j++)
        {
            if (arr1[i] == arr1[j])
            {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted)
        {
            continue;
        }

        // search for the element in the second array
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                found = 1;
                break;
            }
        }

        if (found)
        {
            printf("%d ", arr1[i]);
            commonCount++;
        }
    }

    if (commonCount == 0)
    {
        printf("No common elements found.");
    }

    printf("\n");

    // return statement
    return 0;
}
