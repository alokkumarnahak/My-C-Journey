// Demonstration of array rearrangement in C
// Rotate an array left by one position

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- ROTATE LEFT BY k POSITIONS ---");

    // variable declaration
    int size, k;

    // user input
    printf("Enter array size: ");
    scanf("%d", &size);

    // valid array size check
    if (size < 1)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    // array declaration
    int arr[size];

    // array elements input
    printf("Enter array elements:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // taking input no. of positions
    printf("Enter positions to rotate left: ");
    scanf("%d", &k);

    // Handle k greater than size
    k = k % size;

    // Reverse first k elements
    int left = 0;
    int right = k - 1;

    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // Reverse remaining elements
    left = k;
    right = size - 1;

    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // Reverse entire array
    left = 0;
    right = size - 1;

    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // output
    printf("Array after left rotation:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
