// Demonstration of of arrays in C
// Taking input from user and print output

// preprocessor directive
#include<stdio.h>

// main function
int main()  {

    // program description
    printf("--- ARRAY COPY ---\n\n");

    // variable declaration
    int size;

    // size input from user
    printf("Enter the array size: ");
    scanf("%d", &size);

    // array declaration
    int arr1[size];
    int arr2[size];

    // array elements input
    printf("Enter array elements:\n");
    
    for(int i = 0; i < size; i++)   {
        scanf("%d", &arr1[i]);
    }
    printf("Array input completed.\n");

    printf("\nArray copy processing...\n\n");
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
    
    // printing first array
    printf("Printing first array:\n");
    printf("array 1 : {");
    for(int i = 0; i < size; i++)   {
        printf("%d", arr1[i]);
        if (i != size - 1)
        {
            printf(", ");
        }
        
    }
    printf("}\n");

    // printing second array
    printf("Printing second array:\n");
    printf("array 2 : {");
    for(int i = 0; i < size; i++)   {
        printf("%d", arr2[i]);
        if (i != size - 1)
        {
            printf(", ");
        }
        
    }
    printf("}\n");

    printf("\nArray output completed.\n");

    // return statement
    return 0;
}
