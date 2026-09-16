// Demonstration of functions in C
// function mini program

//main function
#include <stdio.h>

// Function declarations
void header();
void introduction();
void topics();
void practice();
void footer();

//main function
int main()
{
    //program description
    printf("Function-Mini Program");

    //function calling
    header();
    introduction();
    topics();
    practice();
    footer();

    //return statement
    return 0;
}

// Function definitions
void header()
{
    printf("========================================\n");
    printf("           MY C JOURNEY\n");
    printf("========================================\n");
}

void introduction()
{
    printf("\nIntroduction:\n");
    printf("I am learning C programming step by step.\n");
    printf("I am building my programming foundation.\n");
}

void topics()
{
    printf("\nTopics Learned:\n");
    printf("C Basics\n");
    printf("Operators and Expressions\n");
    printf("Decision Making\n");
    printf("Loops\n");
    printf("Functions\n");
}

void practice()
{
    printf("\nPractice:\n");
    printf("I practice programming by creating C programs.\n");
    printf("Each program helps me improve my skills.\n");
}

void footer()
{
    printf("\n========================================\n");
    printf("       KEEP LEARNING C!\n");
    printf("========================================\n");
}
