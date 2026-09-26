// Demonstration of of arrays in C
// Taking input from user and print output

// preprocessor directive
#include<stdio.h>

// main function
int main()  {

    // program description
    printf("--- ARRAY OUTPUT ---\n\n");

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
    printf("Array input completed.\n");

    printf("\nArray:\n");
    printf("{");
    for(int i = 0; i < size; i++)   {
        printf("%d", arr[i]);
        if (i != size - 1)
        {
            printf(", ");
        }
        
    }
    printf("}");

    printf("\nArray output completed.\n");

    // return statement
    return 0;
}
