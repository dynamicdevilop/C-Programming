/* 
    Question - 25 : Write a program to check whether a given number is prime or not using loops.
 */


// Solution :-



#include<stdio.h>

void primeNumber(int num){
    int value = 1;
    for (int i = 2;i < num;i++){
        if (num % i == 0) {
            value = 0;
            break;
        }
       
    }
     if (value == 0){
            printf("%d is not a Prime Number",num);
        } else {
            if (num == 1){
                printf("1 is Neither Prime Nor Composite.");
            } else if(num == 0) {
            printf("0 is Not a Prime Number.");
            } else {
                printf("%d is a Prime Number.",num);
            }
        }
}

int main()
{
    int number;
    printf("Enter a Number : ");
    scanf("%d",&number);
    primeNumber(number);
    
    return 0;
}