#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
     while(num1>0)
     {
        printf("%d ",num2);
        num2*=2;
        num1--;
     }
}