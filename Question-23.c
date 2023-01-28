/* 
    Question - 23 : Write a program to calculate the factorial of a given number using a for loop.
 */


// Solution :-



#include <stdio.h>

long long int factorialUsingLoop(int number)
{
    long long int factorial = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
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