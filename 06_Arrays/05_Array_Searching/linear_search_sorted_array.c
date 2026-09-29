// Demonstration of array searching in C
// Search for an element in a sorted array

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- LINEAR SEARCH IN SORTED ARRAY --- \n\n");

    //variable declaration
    int n, i, key;
    int found = 0;

    // array size user input
    printf("Enter array size: ");
    scanf("%d", &n);

    // array declaration
    int arr[n];

    // valid size check
    if(n < 1)   {
        printf("Error: Invalid array size !\n");
        return 1;
    }

    // array input
    printf("Enter array elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // input key element to search
    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    // search in sorted array
    for (i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            printf("Element %d found at index: %d, position: %d.\n", key, i, i + 1);
            break;
        }

        // stop early because the array is sorted
        if(arr[i] > key)
        {
            break;
        }
    }

    // f element is not present
    if(found == 0)
    {
        printf("Element %d not found in the array.\n", key);
    }

    // return statement
    return 0;
}