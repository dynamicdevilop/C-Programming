/*
    Question -03 : Write a Program to convert Celsius (Centigrade) to Farhenite.
*/

// Solution :-

#include <stdio.h>

double temperature(double celsius)
{
    double farhenite;

    farhenite = (celsius * 9/5) + 32 ;
    return farhenite;
}

int main()
{
    double f,c;

    printf("Enter temperature in celsius : ");
    scanf("%lf",&c);
    f = temperature(c);
    printf("%.2lf celsius = %.2lf farhenite",c,f);
    return 0;
}