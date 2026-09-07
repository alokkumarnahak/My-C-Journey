//Demonstrate while loop
//Program to print odd numbers from 1 to n

//preprocessor directive
#include<stdio.h>

//main function
int main()  {
    int n;
    int i = 1;

    //program description
    printf("--- Program to print odd numbers from 1 to n ---\n\n");

    //taking input from user
    printf("Enter n(positive) : ");
    scanf("%d",&n);

    //logic
    while(i <= n)    {
        printf("%d\n",i);
        i += 2;
    }

    //return statement
    return 0;
}