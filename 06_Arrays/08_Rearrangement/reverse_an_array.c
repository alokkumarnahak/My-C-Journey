// Demonstration of array rearrangement in C
// reverse an array

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- REVERSE AN ARRAY ---\n\n");

    // variable declaration
    int size;

    // user input
    printf("Enter array size: ");
    scanf("%d", &size);

    // array declaration
    int arr[size];
    int top = size - 1;

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
    for (int i = 0; i < size/2; i++) { 
        int temp = arr[top];
        arr[top] = arr[i];
        arr[i] = temp;
        top--;
    }

    // printing the new array
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // return statement
    return 0;
}
