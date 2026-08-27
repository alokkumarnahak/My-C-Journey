// Demonstrate assignment operators in C

//preprocessor directive
#include <stdio.h>  //for standard input and output functions

//main function
int main()
{
    //program description
    printf("-: Demonstrate assignment operators in C :-\n\n");

    //variable declaration
    int a;

    //using assignment operator to assign value & printing the value of variable a after every assignment
    a = 5;
    printf("Value of a after assignment a = 5: %d\n", a);
    a += 3; // a = a + 3
    printf("Value of a after assignment a += 3: %d\n", a);
    a -= 2; // a = a - 2
    printf("Value of a after assignment a -= 2: %d\n", a);
    a *= 2; // a = a * 2
    printf("Value of a after assignment a *= 2: %d\n", a);
    a /= 4; // a = a / 4
    printf("Value of a after assignment a /= 4: %d\n", a);
    a %= 5; // a = a % 5
    printf("Value of a after assignment a %%= 5: %d\n", a);
    a <<= 2; // a = a << 2
    printf("Value of a after assignment a <<= 2: %d\n", a);
    a >>= 1; // a = a >> 1
    printf("Value of a after assignment a >>= 1: %d\n", a);
    a &= 2; // a = a & 2
    printf("Value of a after assignment a &= 2: %d\n", a);
    a ^= 1; // a = a ^ 1
    printf("Value of a after assignment a ^= 1: %d\n", a);
    a |= 3; // a = a | 3
    printf("Value of a after assignment a |= 3: %d\n", a);

    //return statement
    return 0;
}