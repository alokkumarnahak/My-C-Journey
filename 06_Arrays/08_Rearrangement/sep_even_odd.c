// Demonstration of array rearrangement in C
// separate even and odd

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- SEPARATE EVEN & ODD ---\n\n");

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
    for (int i = 0; i <= top; i++) { 
        if (arr[i] % 2 == 1) {
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
