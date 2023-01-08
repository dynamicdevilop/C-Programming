/*
    Question - 02 :
        Calculate the Area of a circle and modify the same program to 
        calculate the volume of a cylinder given its radius and height.
*/

// Solution :-


#include <stdio.h>
#define pi 3.14

double circle(double radius)
{
    double area = pi * radius * radius;
    return area;
}

double cylinder(double radii,double height)
{
    double volume = circle(radii) * height;
    return volume;
}

int main()
{
    double radii1,radii2,height,area,volume;
    printf("Enter the radius for Circle : ");
    scanf("%lf",&radii1);

    printf("\nEnter the Radius of Cylinder : ");
    scanf("%lf",&radii2);
    printf("Enter the height of Cylinder : ");
    scanf("%lf",&height);
    
    area = circle(radii1);
    volume = cylinder(radii2,height);
    printf("The Area of Circle = %.2lf",area); 
    printf("\nThe Volume of Cylinder = %.2lf ",volume);




    return 0;
}
