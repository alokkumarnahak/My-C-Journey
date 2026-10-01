// Demonstration of array frequency in C
// find unique elements

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- FIND UNIQUE ELEMENTS ---\n\n");

    // variable declaration
    int size;
    int count;

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
    printf("Unique elements:\n");

    for (int i = 0; i < size; i++)
    {
        count = 0;

        // count occurrences of current element
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        // display element if it occurs only once
        if (count == 1)
        {
            printf("%d\n", arr[i]);
        }
    }

    // return statement
    return 0;
}