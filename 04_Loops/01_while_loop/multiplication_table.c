//Demonstrate while loop
//Program to print multiplication table

//preprocessor directive
#include<stdio.h>

//main function
int main()  {
    int n;
    int i = 1;

    //program description
    printf("--- Multiplication Table ---\n\n");

    //taking input from user
    printf("Enter n(positive) : ");
    scanf("%d",&n);

    //logic
    while(i <= 10)    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }

    //return statement
    return 0;
}