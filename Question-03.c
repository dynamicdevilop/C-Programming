/*
    Question -03 : Write a Program to convert Celsius (Centigrade) to Fahrenheit.
*/

// Solution :-

#include <stdio.h>

double temperature(double celsius)
{
    double fahrenheit;

    fahrenheit = (celsius * 9/5) + 32 ;
    return fahrenheit;
}

int main()
{
    double f,c;

    printf("Enter temperature in celsius : ");
    scanf("%lf",&c);
    f = temperature(c);
    printf("%.2lf celsius = %.2lf fahrenheit",c,f);
    return 0;
}
