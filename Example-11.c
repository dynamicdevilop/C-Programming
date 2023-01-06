// Display Fibonacci series
#include <stdio.h>

int main()
{
  int number,count,term1 = 0,term2 =1,termcount = 0;
  
  printf("Enter Term for Fibonacci series (Range -> 1 to 20) : ");
  scanf("%d",&number);
  
  if(number >=1 && number <=20)
  {
  
        printf("\nFibonacci Series of %d term = 0",number);
        for(count = 1; number > count; count++)
        {
            term1 = term2;
            term2 = termcount;
            termcount = term1+term2;
            printf(", %d",termcount);
            
        }
  } else {
      printf("Invalid");
  }
    return 0;
}
