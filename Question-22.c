/* 
    Question - 22 : Write a program to calculate the sum of the numbers occuring in the
        multiplication table of 8. (Consider 8 x 1 to 8 x 10).
 */


// Solution :-


#include <stdio.h>

int sumOfTable(int number)
{
    int sum = 0;
    for (int i = 1; i < 11; i++)
    {
        sum += (number*i);
    }
    return sum;
    
}

int main()
{
    int n = 8;
    int result = sumOfTable(n);
    printf("The Sum of table of %d = %d\n",n,result);
    return 0;
}