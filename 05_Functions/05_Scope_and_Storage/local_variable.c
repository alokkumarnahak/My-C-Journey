//Demonstration of local variables

//preprocessor directive
#include<stdio.h>

//function declaration
void display();
// void show();

//main function
int main()  {

    //function call
    display();
    // show();

    //return statement
    return 0;
}

//function definition
void display()  {
    int number = 100;   //It can be only called inside this function can't outside this function
    printf("Value in display(): %d\n",number);
}

/* 
void show() {
    printf("Value in show(): %d\n",number);
}
    */
