// Demonstration of array frequency in C
// find frequency of every element

// preprocessor directive
#include <stdio.h>

// main function
int main()
{
    // program description
    printf("--- FREQUENCY OF EVERY ELEMENT ---\n\n");

    // variable declaration
    int n;
    int count;

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

    // logic
    for (int i = 0; i < n; i++)
    {
        count = 1;

        // check whether the element appeared before
        int alreadyCounted = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                alreadyCounted = 1;
                break;
            }
        }

        // skip already counted elements
        if (alreadyCounted)
        {
            continue;
        }

        // count frequency
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        printf("\n");
        
        printf("%d occurs %d time(s)\n", arr[i], count);
    }

    // return statement
    return 0;
}
