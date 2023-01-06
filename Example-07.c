// Checker whether a character is an alphabet or not.
#include <stdio.h>

int main()
{
    char character;
    int number;
    
    printf("Enter a character : ");
    scanf("%c",&character);
    
    //Type casted char to int (To store Ascii Value of char)
    number = (int)character;
    if((number >= 65 && number <= 90)||(number >=97 && number <= 122))
    {
        printf("Character = %c , is an Alphabet.",character);
    } else {
        printf("Character = %c , is not an Alphabet.",character);
    }
    return 0;
}
