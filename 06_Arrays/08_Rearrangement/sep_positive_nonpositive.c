// Demonstration of array rearrangement in C
// separate positive and negative numbers

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- SEPARATE POSITIVE & NEGATIVE ---\n\n");

    // variable declaration
    int size;

    // user input
    printf("Enter array size: ");
    scanf("%d", &size);

    // valid size check
    if(size < 1)   {
        printf("Error: Invalid array size !");
        return 1;
    }

    // array declaration
    int arr[size];
    int top = size - 1;

    // array input
    printf("Enter array elements: \n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // logic
    for (int i = 0; i <= top; i++) { 
        if (arr[i] > 0) {
            int temp = arr[top];
            arr[top] = arr[i];
            arr[i] = temp;
            top--;
            i--;
        }
    }

    // printing the new array
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // return statement
    return 0;
}
