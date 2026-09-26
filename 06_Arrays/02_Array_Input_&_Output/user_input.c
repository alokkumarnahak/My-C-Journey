// Demonstration of of arrays in C
// Taking input from user

// preprocessor directive
#include<stdio.h>

// main function
int main()  {

    // program description
    printf("--- ARRAY INPUT ---\n\n");

    // variable declaration
    int size;

    // size input from user
    printf("Enter the array size: ");
    scanf("%d", &size);

    // array declaration
    int arr[size];

    // array elements input
    printf("Enter array elements:\n");
    
    for(int i = 0; i < size; i++)   {
        scanf("%d", &arr[i]);
    }

    printf("\nArray input completed.\n");
    
    // return statement
    return 0;
}
