// Demonstration of frequency of elements in array in C
// count frequency of an element

// preprocessor directive
#include<stdio.h>

// main function
int main()  {
    // program description
    printf("--- COUNT FREQUENCY ---\n\n");

    // variable declaration
    int n, count = 0, key;

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

    // input key element
    printf("Enter the key element: ");
    scanf("%d", &key);

    // logic
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    // print output
    printf("Frequency of element %d is: %d", key, count);

    // return statement
    return 0;
}
