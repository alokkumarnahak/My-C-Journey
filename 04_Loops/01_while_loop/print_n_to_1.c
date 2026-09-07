//Demonstrate while loop
//Program to print positive numbers from n to 1

//preprocessor directive
#include<stdio.h>

//main function
int main()  {
    int n;
    int i;

    //program description
    printf("--- Program to print positive numbers from n to 1 ---\n\n");

    //taking input from user
    printf("Enter n(positive) : ");
    scanf("%d",&n);

    i  = n;

    //logic
    while(i > 0)    {
        printf("%d\n",i);
        i--;
    }

    //return statement
    return 0;
}