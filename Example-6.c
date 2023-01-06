// Check Whether a Number is Positive or Negative or Zero.
#include <stdio.h>

int main()
{
    int number;
     printf("Enter a Number : ");
     scanf("%d",&number);
     
     if(number >= 0)
     {
         if(number == 0 )
         {
             printf("Number is Zero");
         } else {
             printf("Number is Positive");
         }
     } else {
         printf("Number is Negative");
     }
    return 0;
}
