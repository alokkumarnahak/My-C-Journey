// Demonstration of function in C
// Mini project - Student marks calculator

// preprocessor directive 
#include<stdio.h>

// function prototype
float total(float sub1,float sub2,float sub3);
float average(float sub1,float sub2,float sub3);
float high_mark(float sub1,float sub2,float sub3);
float low_mark(float sub1,float sub2,float sub3);
void passFail(float sub1,float sub2,float sub3);

// main function
int main()  {

    // user input
    float phy, chem, math;

    // user input
    printf("Enter mark of 3 subjects: \n");
    scanf("%f %f %f", &phy, &chem, &math);

    // valid data check
    if((phy > 100 || phy < 0) || (chem > 100 || chem < 0) || (math > 100 || math < 0))  {
        printf("Invalid Input !");
        return 1;
    }

    // Report
    printf("\n==== MARKS CALCULATION REPORT ====\n\n");
    total(phy, chem, math);
    average(phy, chem, math);
    high_mark(phy, chem, math);
    low_mark(phy, chem, math);
    passFail(phy, chem, math);
    printf("\n==================================\n");

    // return statement
    return 0;

}

// function definition
float total(float sub1,float sub2,float sub3)   {
    float markGain = sub1 + sub2 + sub3;
    printf("Total marks: %.2f\n", markGain);
    return markGain;
}

float average(float sub1,float sub2,float sub3) {
    float average = (sub1 + sub2 + sub3)/3;
    printf("Average marks: %.2f\n", average);
    return average;
}

float high_mark(float sub1,float sub2,float sub3)   {
    float highest;
    if(sub1 >= sub2 && sub1 >= sub3)
        highest = sub1;
    else if(sub2 >= sub1 && sub2 >= sub3)
        highest = sub2;
    else
        highest = sub3;
    printf("Highest mark: %.2f\n",highest);
    return highest;
}

float low_mark(float sub1,float sub2,float sub3)   {
    float lowest;
    if(sub1 <= sub2 && sub1 <= sub3)
        lowest = sub1;
    else if(sub2 <= sub1 && sub2 <= sub3)
        lowest = sub2;
    else
        lowest = sub3;
    printf("Lowest mark: %.2f\n",lowest);
    return lowest;
}

void passFail(float sub1,float sub2,float sub3) {
    if(sub1 > 33 && sub2 > 33 && sub3 > 33)
        printf("Congragulations !\nYou are passed.\n");
    else
        printf("You are failed.\n");
}
