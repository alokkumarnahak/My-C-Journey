// Demonstration of array sorting in C
// selection sort

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- SELECTION SORT ---\n\n");

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

    // Selection sort 
for (int i = 0; i < size - 1; i++) { 
    int minIndex = i; 
    
    for (int j = i + 1; j < size; j++) { 
        if (arr[j] < arr[minIndex]) { 
            minIndex = j; 
        } 
    } 
    
    if (minIndex != i) { 
        int temp = arr[i]; 
        arr[i] = arr[minIndex]; 
        arr[minIndex] = temp; 
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

