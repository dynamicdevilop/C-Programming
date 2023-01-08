/*
Question - 01 :
    Write a C program to calculate area of a rectangle :
    (a) using hard coded inputs
    (b) using inputs supplied by the user
 */

// Solution :-

#include <stdio.h>

int area;
int areaOfRectangle(int length, int breadth)
{
    area = length * breadth;
    return area;
}

int main()
{
   
    int l, b,result;
        printf("PART - (a) : \n\n");
        l = 5, b = 3;
        result = areaOfRectangle(l, b);
        printf("Area = %d\n", result);

        printf("\n\n\nPART - (b) : \n\n");

        printf("Enter the Length of Rectangle : ");
        scanf("%d", &l);
        printf("Enter the breadth of Rectangle : ");
        scanf("%d", &b);
        result = areaOfRectangle(l, b);
        printf("\n\nArea = %d", result);

        printf("\n\n\nTHANK YOU");
   
}