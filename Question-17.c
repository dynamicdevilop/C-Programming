/* 
    Question - 17 : Write a program to print multiplication table of 10 in reverse order.
 */


// Solution :-



#include <stdio.h>

void multiplicationTable(int number)
{
    for (int i = 10; i > 0; i--)
    {
        printf("%d x %d = %d\n",number,i,number * i);
    }
}

int main()
{
    int n = 10;
    multiplicationTable(n);
    return 0;
}