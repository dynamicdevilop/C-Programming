// 'C' Program to check whether a number is odd or even
#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a Number : ");
    scanf("%d",&number);
    
    if(number % 2 == 0) // edited by ashish
    {
        printf("Number = %d , is Even.");
    } else
        {
            printf("Number = %d , is Odd.");
        }
    return 0;
}
