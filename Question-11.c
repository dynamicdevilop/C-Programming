/* 
    Question - 11 : Write a Program to find out whether a student is pass or fail, if it requires total
        40 % and atleast 33 % in each subject to pass. Assume 3 subjects and take marks as an input
        from the user.
 */

// Solution :-


#include <stdio.h>

double student(double math,double science,double english)
{
    double totalMarks = math + science + english;
    double totalPercentage = (totalMarks / 3);

    if ((math >=0 && math <= 100)&&(science >=0 && science <=100)&&(english >=0 && english <=100))
    {
        if(totalPercentage >= 40 && math >=33 && science >=33 && english >= 33)
        {
            printf("You are Pass.\nYour Percentage = %.2lf",totalPercentage);
        } else {
            printf("You are Fail.\nYour Percentage = %.2lf",totalPercentage);
        }   
    } else {
        printf("Marks Can neither be greater than 100 nor a negative number.");
    }
    return 0;
    
}

int main()
{
    double m,s,e;
    printf("Enter Your Marks in Mathematics (Out of 100) : ");
    scanf("%lf",&m);
    printf("Enter Your Marks in Science (Out of 100) : ");
    scanf("%lf",&s);
    printf("Enter Your Marks in English (Out of 100) : ");
    scanf("%lf",&e);
    student(m,s,e);
    return 0;
}