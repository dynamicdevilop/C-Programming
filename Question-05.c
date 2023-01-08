/*
    Question - 05 : Which of the following is invalid in C ?
        (i)    int a ; b = a;
        (ii)   int v = 3^3;
        (iii)  char dt = '21 Dec 2020'
 */

// Solution :-

#include <stdio.h>

int main()
{
    int v = 3 ^ 3;
    printf("Option - (i) is Invalid\nBecause b is not declared.\n");
    printf("Option - (ii) is valid\nBecause ^ operator is Xor Operator in C.\n");
    printf("Option - (iii) is Invalid\nBecause char can store only one Character.");

    return 0;
}