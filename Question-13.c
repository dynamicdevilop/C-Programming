/* 
    Question - 13 : Write a program to find whether a year entered by the 
        user is a leap year or not.  Take year as an input from the user.
 */

// Solution :-



#include <stdio.h>

void leapYear(int year)
{
    if(year % 4 ==0)
    {
        if(year % 100 == 0){
            if (year % 400 == 0 ){
                printf("%d is a Leap Year.",year);
            } else{
                printf("%d is not a Leap Year.",year);
            }
        } else{
            printf("%d is a Leap Year.",year);
        }
    } else {
        printf("%d is not a Leap Year.",year);
    }
}

int main()
{
    int y;
    printf("Enter a Year : ");
    scanf("%d",&y);
    leapYear(y);
    return 0;
}