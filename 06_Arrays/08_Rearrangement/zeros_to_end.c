// Demonstration of array rearrangement in C
// move zeros to the end

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- MOVE ZEROS TO END ---\n\n");

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
    int position = 0;
    for (int i = 0; i < size; i++) { 
        if (arr[i] != 0) {
            arr[position] = arr[i];
            position++;
        }
    }

    // fill remaining positions with zeros
    if(position < size) {
        arr[position] = 0;
        position++;
    }

    // printing the new array
    for(int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }

    // return statement
    return 0;
}
