// Program to add sum of first n natural numbers
#include <stdio.h>

int main() {
 int number,count,sum;
 
 printf("Enter a number : ");
 scanf("%d",&number);
 
 for(count=1;count<=number;count++) 
 {
     sum +=count;
 }
    printf("The Sum of first %d Numbers = %d",number,sum);
    return 0;
}
