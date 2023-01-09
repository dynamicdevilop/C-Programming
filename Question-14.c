/* 
    Question - 14 : Write a program to determine whether a character entered by the
        user is lowercase or not.
 */

// Solution :-



#include <stdio.h>

void characterCase(char character){
    if(character >=97 && character <=122){
        printf("The Character You Entered is Lowercase.");
    } else {
        printf("The Character You Entered is not Lowercase.");
    }
}

int main()
{
    char input;
    printf("Enter a Character : ");
    scanf("%c",&input);
    characterCase(input);
    return 0;
}