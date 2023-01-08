/*
    Question - 02 :
        Calculate the Area of a circle and modify the same program to 
        calculate the volume of a cylinder given its radius and height.
*/

// Solution :-


#include <stdio.h>
#define pi 3.14

int circle(int radius)
{
    int area = pi * radius * radius;
    return area;
}

int cylinder(int radii,int height)
{
    int volume = circle(radii) * height;
    return volume;
}

int main()
{
    int radii1,radii2,height,area,volume;
    printf("Enter the radius for Circle : ");
    scanf("%d",&radii1);

    printf("\nEnter the Radius of Cylinder : ");
    scanf("%d",&radii2);
    printf("Enter the height of Cylinder : ");
    scanf("%d",&height);
    
    area = circle(radii1);
    volume = cylinder(radii2,height);
    printf("The Area of Circle = %d",area); 
    printf("\nThe Volume of Cylinder = %d ",volume);




    return 0;
}