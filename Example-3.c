// 'C' Program to Find the largest number among three numbers
#include <stdio.h>

int main() {
    double number1,number2,number3;
    
    printf("Enter Number 1 : ");
    scanf("%lf",&number1);
    
    printf("Enter Number 2 : ");
    scanf("%lf",&number2);
    
    printf("Enter Number 3 : ");
    scanf("%lf",&number3);
    
    if(number1 > number2)
    {
        if(number1 > number3)
        {
            printf("\n%.2lf is the largest number among [%.2lf,%.2lf,%.2lf]",number1,number1,number2,number3);
        } else {
            printf("\n%.2lf is the largest number among [%.2lf,%.2lf,%.2lf]",number3,number1,number2,number3);
        }
    } else {
        printf("\n%.2lf is the largest number among [%.2lf,%.2lf,%.2lf]",number2,number1,number2,number3);
    }
     return 0;
}
