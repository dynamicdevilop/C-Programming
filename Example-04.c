// 'C' Program to Find all roots of a quadratic equation
// Only Real roots
#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c,discriminant,d,root1,root2;
    
    printf("General form of Quadratic Equation : ax^2 + bx + c\n");
    
    printf("Enter the Coefficient of x^2 : ");
    scanf("%lf",&a);
    printf("Enter the Coefficient of x : ");
    scanf("%lf",&b);
    printf("Enter the Constant Value :");
    scanf("%lf",&c);
    
    discriminant = (b*b) - (4*a*c);
    
    printf("\nThe Quadratic Equation is : (%.1lfx^2) + (%.1lfx) + (%.1lf)\n\n",a,b,c);
    
    if (discriminant >= 0)
    {
        d = sqrt(discriminant);
        root1 = ((-b) + (d))/(2*a);
        root2 = ((-b) - (d))/(2*a);
        if(d != 0 )
        {
            printf("Roots of the Quadratic Equation : %.1lf and %.1lf",root1,root2);
        } else {
            printf("Roots of the Quadratic Equation are Equal : %.1lf",root1);
        }
    } else {
        printf("The Roots of the Quadratic Equation are Imaginary");
    }
    
     return 0;
}
