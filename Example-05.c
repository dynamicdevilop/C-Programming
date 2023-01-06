// 'C' Program to Check Whether the Entered Year is Leap Year or not
#include <stdio.h>

int main() {
    int year;
    
    printf("Enter Year : ");
    scanf("%d",&year);
    
    if(year % 4 == 0)
    {
        if(year %  100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Year = %d is a Leap Year.");
            } else {
                printf("Year = %d is not a Leap Year.");
            }
        } else {
            printf("Year = %d is a Leap Year.");
        }
    } else {
        printf("Year = %d is not a Leap Year.");
    }
    
    
     return 0;
}
