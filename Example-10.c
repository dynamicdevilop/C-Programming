// Generate multiplication table
#include <stdio.h>

int main()
{
   int number,count,table;
   
   printf("Enter a Number (Range -> 1 to 20) : ");
   scanf("%d",&number);
   
    if(number >=1 && number <=20)
    {
       for(count = 1;count <= 10;++count)
       {
           table = number * count;
           printf("\n%d x %d = %d",number,count,table);
       }
    } else {
       printf("Invalid");
   }
    return 0;
}
