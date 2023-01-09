/* 
    Question - 15 : Write a Program to find greatest of four numbers entered by the user.
 */



// Solution :-


 #include <stdio.h>
 
void greatestOfFour(int num1,int num2,int num3,int num4);


 int main()
 {
    int a,b,c,d;
    printf("Enter Number - 1 : ");
    scanf("%d",&a);
    printf("Enter Number - 2 : ");
    scanf("%d",&b);
    printf("Enter Number - 3 : ");
    scanf("%d",&c);
    printf("Enter Number - 4 : ");
    scanf("%d",&d);

    greatestOfFour(a,b,c,d);
    return 0;
 }

 void greatestOfFour(int num1,int num2,int num3,int num4)
 {
    if (num1 > num2 && num1 > num3 && num1 > num4){
        printf("%d is Greatest of Four",num1);
    } else if (num2 > num1 && num2 > num3 && num2 > num4){
        printf("%d is Greatest of Four",num2);
    } else if (num3 > num1 && num3 > num2 && num3 > num4){
         printf("%d is Greatest of Four",num3);
    } else {
        printf("%d is Greatest of Four",num4);
    }
    
 }