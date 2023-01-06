// 'C' Program to Check whether a character is a vowel or consonant
#include <stdio.h>

int main() {
    
    char character;
    int value;
    
    // Take input from User
    printf("Enter Alphabet : ");
    scanf("%c", &character);
    
    //Limitation - non alphabet character will also display consonant.
    
    if(character == 'a' || character == 'A' || character == 'e' || character =='E' || character == 'i' || character == 'I' || character == 'o' || character == 'O' || character == 'u' || character == 'U')
    {
        printf("Alphabet = %c , is a vowel.",character);
    } else {
        printf("Alphabet %c , is a Consonant",character);
    }
    
    return 0;
}
