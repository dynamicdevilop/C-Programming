/* 
        Question - 07 : Write a program to check whether a number is divisible by 97 or not.
 */

// Solution :- 




#include <stdio.h>

int divisibilityBy97(int number)
{
    if (number % 97 == 0 )
    {
        printf("%d is Divisible by 97.",number);
    } else {
        printf("%d is not divisible by 97.",number);
    }
    return 0;
}

int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    divisibilityBy97(num);
    return 0;
}