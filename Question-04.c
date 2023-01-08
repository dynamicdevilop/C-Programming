/*
    Question - 04 : Write a Program to calculate simple interest for a set
        of values representing principal, number of years, and rate of
        interest.
*/

// Solution :-


#include <stdio.h>

double simpleInterest(double principal,double time,double rate)
{
    double interest =(principal * rate * time)/100;
    return interest;
}

int main()
{
    double p,r,t,si;
    printf("Enter Principal Value : ");
    scanf("%lf",&p);
    printf("Enter Rate of Interest : ");
    scanf("%lf",&r);
    printf("Enter Time (in year) : ");
    scanf("%lf",&t);

    si = simpleInterest(p,t,r);
    printf("Simple Interest : %.2lf",si);

    return 0;
}