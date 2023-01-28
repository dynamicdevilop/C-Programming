/* 
    Question - 24 : Write Previous problem using while loop.
        Previous Question : Write a program to calculate the factorial of a given number.
 */


// Solution :-


#include <stdio.h>

long long int factorialUsingLoop(int number)
{
    int i = 1;
    long long int factorial = 1;
    while ( i <= number)
    {
        factorial *= i;
         i++;
    }
    return factorial;
    
}

int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);

    long long int result = factorialUsingLoop(num);
    printf("Factorial of %d = %lld",num,result);
    return 0;
}