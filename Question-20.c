/* 
    Question - 20 : Write a program to sum first ten natural numbers using while loop.
 */


// Solution :-



#include <stdio.h>

int sumOfNaturalNumbers(int number){
    int i = 1;
    int sum = 0;
    while (i <= number)
    {
        sum += i;
        i++;
    }
    return sum;
}

int main()
{
    int n = 10;
    int result = sumOfNaturalNumbers(n);
    printf("Sum of First %d Natural Numbers = %d",n,result);
    return 0;
}