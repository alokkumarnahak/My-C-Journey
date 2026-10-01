// Demonstration of array duplicates in C
// find duplicate elements

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- FIND DUPLICATE ELEMENTS ---\n\n");

    // variable declaration
    int size;
    int duplicate;

    // user input
    printf("Enter array size: ");
    scanf("%d", &size);

    // array declaration
    int arr[size];

    // valid size check
    if(size < 1)   {
        printf("Error: Invalid array size !");
        return 1;
    }

    // array input
    printf("Enter array elements: \n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // logic
    printf("\nDuplicate elements:\n");

    for (int i = 0; i < size; i++)
    {
        duplicate = 0;

        // check whether the element appeared earlier
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        // skip if already checked
        if (duplicate)
        {
            continue;
        }

        // check whether the element appears again
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }

    // return statement
    return 0;
}
