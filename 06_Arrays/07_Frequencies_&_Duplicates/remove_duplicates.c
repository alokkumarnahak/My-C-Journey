// Demonstration of array manipulation in C
// remove duplicates

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- REMOVE DUPLICATES ---\n\n");

    // variable declaration
    int size;

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
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                // shift elements to the left
                for (int k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;
                j--;
            }
        }
    }

    // display array
    printf("\nArray after removing duplicates:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // return statement
    return 0;
}
