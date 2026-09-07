//Demonstrate while loop
//Program to print product from 1 to n

//preprocessor directive
#include<stdio.h>

//main function
int main()  {
    int n;
    int i = 1;
    int product = 1;

    //program description
    printf("--- Product from 1 to n ---\n\n");

    //taking input from user
    printf("Enter n(positive) : ");
    scanf("%d",&n);

    //logic
    while(i <= n)    {
        product *= i;
        i++;
    }

    //printing product
    printf(" from 1 to %d is : %d\n",n,product);
    
    //return statement
    return 0;
}