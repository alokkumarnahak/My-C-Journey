// Demonstration of array frequency in C
// find the most and least frequent elements

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- MOST AND LEAST FREQUENT ELEMENT ---\n\n");

    // variable declaration
    int size;
    int count;

    // user input
    printf("Enter array size: ");
    scanf("%d", &size);

    // array declaration
    int arr[size];

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

    // other variable declaration
    int maxCount = 0;
    int minCount = size + 1;
    int mostFrequent = arr[0];
    int leastFrequent = arr[0];

    // logic
    for (int i = 0; i < size; i++)
    {
        count = 0;

        // count frequency of current element
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        // find most frequent element
        if (count > maxCount)
        {
            maxCount = count;
            mostFrequent = arr[i];
        }

        // find least frequent element
        if (count < minCount)
        {
            minCount = count;
            leastFrequent = arr[i];
        }
    }

    // display results
    printf("Most frequent element: %d\n", mostFrequent);
    printf("Frequency: %d\n\n", maxCount);

    printf("Least frequent element: %d\n", leastFrequent);
    printf("Frequency: %d\n", minCount);

    // return statement
    return 0;

