// Find the sum of natural numbers
#include <stdio.h>

int main()
{
    int number,sum = 0,count;
    printf("Enter a Number : ");
    scanf("%d",&number);
    
    for(count = 1;number >= count; count++)
    {
        sum += count;
    }
    printf("The Sum of First %d Natural Numbers = %d",number,sum);
    return 0;
}
