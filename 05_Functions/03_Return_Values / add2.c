#include <stdio.h>

// Function declaration
int add(int a, int b);

int main()
{
    int result;

    result = add(10, 20);

    printf("First Number  : 10\n");
    printf("Second Number : 20\n");
    printf("Sum           : %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}
