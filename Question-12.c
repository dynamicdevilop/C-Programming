/* 
    Question - 12 : Calculate income tax paid by an employee to the government as per the slabs mentioned
        below -
        INCOME SLAB             Tax
        -----------------------------
        2.5L to 5.0L     ---    5%
        5.0L to 10.0L    ---    20%
        Above 10.0L      ---    30%

        Note that there is no tax below 2.5L. Take income amount as an input from the user.
 */

// Solution :-

#include <stdio.h>

void incomeTax(double income)
{
    double tax;
    if(income < 2.5){
        printf("No Tax");
    } else if (income >= 2.5 && income < 5.0){
        tax = 0.05 * (income - 2.5);
        printf("Tax = %.3lf L",tax);
    } else if (income >= 5.0 && income < 10.0){
        tax =(0.20 * (income - 5.0));
        printf("Tax = %.3lf L",tax);
    } else{
        tax = (0.30 * (income - 10.0));
        printf("Tax = %.3lf L",tax);
    }
    
}


int main()
{
    double amount;
    printf("If your income is 2.5 Lakh then input 2.5 only.\nEnter Your Income (in Lakhs) :");
    scanf("%lf",&amount);
    incomeTax(amount);
    return 0;
}