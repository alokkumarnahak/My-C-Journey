// Demonstration of array rearrangement in C
// Merge two arrays

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- MERGE TWO ARRAYS ---\n\n");

    // variable declaration
    int size1, size2;

    // first array size input
    printf("Enter size of first array: ");
    scanf("%d", &size1);

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

    // merged array declaration
    int merged[size1 + size2];

    // copy first array
    for (int i = 0; i < size1; i++)
    {
        merged[i] = arr1[i];
    }

    // copy second array
    for (int i = 0; i < size2; i++)
    {
        merged[size1 + i] = arr2[i];
    }

    // printing merged array
    printf("\nMerged array:\n");

    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", merged[i]);
    }

    printf("\n");

    // return statement
    return 0;
}ṇ
