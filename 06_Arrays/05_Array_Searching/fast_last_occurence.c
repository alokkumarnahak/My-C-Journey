// Demonstration of array searching in C
// linear search

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- FIRST & LAST OCCURRENCE ---\n\n");

    // variable declaration
    int n, key, count = 0;

    // user input
    printf("Enter array size: ");
    scanf("%d", &n);

    // array declaration
    int arr[n];

    // valid size check
    if(n < 1)   {
        printf("Error: Invalid array size !");
        return 1;
    }

    // array input
    printf("Enter array elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // input key element to search
    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    // logic
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)   {
            printf("First occurence at index: %d, position: %d\n", i, i+1);
            count++;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] == key)   {
            printf("Last occurence at index: %d, position: %d\n", i, i+1);
            break;
        }
    }

    // if element is not present
    if(count == 0)  {
        printf("The element %d is not present in the array.",key);
    }

    // return statement
    return 0;
}
