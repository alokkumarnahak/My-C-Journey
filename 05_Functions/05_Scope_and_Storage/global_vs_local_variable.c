//Demonstration of difference b/w local and global variables

//preprocessor directive
#include<stdio.h>

//global variable
int number = 100;

//function declaration
void display();
void show();

//main function
int main()  {

    //function call
    display();
    show();

    //return statement
    return 0;
}

//function definition
void display()  {
    //local variable
    int number = 50;    //the value of number is 50 only inside this function
    printf("Value in display(): %d\n",number);
}

void show() {
    printf("Value in show(): %d\n",number);
}
