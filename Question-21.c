/* 
    Question - 21 :  Write a program to implement previous problem using for and do-while loop.
         Previous Question :  Write a program to sum first ten natural numbers using while loop.
 */


// Solution :-


#include <stdio.h>

int forLoop_sum(int number){
    int i;
    int sum = 0;
    for(i = 1; i < 11;i++)
    {
        sum += i;
    }
    return sum;
    
}

int doWhile_sum(int number){
    int i = 1;
    int sum = 0;
    do{
        sum += i;
        i++;
    } while (i < 11);
    return sum;
    
}

int main()
{
    int n = 10;
    int result1 = forLoop_sum(n);
    int result2 = doWhile_sum(n);
    printf("Sum of First %d Natural Numbers Using For loop = %d\n",n,result1);
    printf("Sum of First %d Natural Numbers Using do_while loop = %d\n",n,result2);
    return 0;
}