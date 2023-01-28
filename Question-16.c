/* 
    Question - 16 : Write a Program to print multiplication table of a 
        given number n.
 */


// Solution :-


#include <stdio.h>

void multiplicationTable(int number){
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n",number,i,number * i);
    }
    
}

int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    multiplicationTable(n);
    return 0;
}