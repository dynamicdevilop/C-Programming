// Find factorial of a number
#include <stdio.h>

int main()
{
   int number,factorial = 1,count;
   
   printf("Enter a Number (Range -> 1 to 10) : ");
   scanf("%d", &number);
   
   if(number <=10 && number >=1)
   {
   for(count = 1;number >= count;count++)
   {
       factorial *= count;
   }
   printf("The Factorial of %d = %d",number,factorial);
   } else {
       printf("Invalid");
   }
    return 0;
}
