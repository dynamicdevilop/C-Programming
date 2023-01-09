/*
        Question - 10 : What will be the output of the program -
            int a = 10;
            if (a = 11)
                printf("I am 11");
            else
                printf("I am not 11");
 */

// Solution :-

#include <stdio.h>

int main()
{
    printf("The Output for the question will be : \n");
    printf("I am 11\nBecause in if condition a = 11, that is we are assigning 11 in a");
    printf("\nWhich means a is non zero which evaluates to true in if condition so the statement inside ");
    printf("if statement will be displayed.");
    printf("\nHere we are not checking whether a == 11 or not.");
    return 0;
}