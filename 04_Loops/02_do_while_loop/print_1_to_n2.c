//Demonstrate do-while loop
//Program to print positive numbers from 1 to n

//preprocessor directive
#include<stdio.h>

//main function
int main()  {
    int n;
    int i = 1;

    //program description
    printf("--- Program to print numbers from 1 to n ---\n\n");

    //taking input from user
    printf("Enter n(positive) : ");
    scanf("%d",&n);

    //logic
    do{
        printf("%d\n",i);
        i++;
    }
    while(i <= n);

    //return statement
    return 0;
}

