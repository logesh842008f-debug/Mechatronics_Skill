#include<stdio.h>
int main()
{
    int num,temp=0,n1=0;
    scanf("%d",&num);
    while(num!=0)
    {
        temp+=num%10;
        num/=10;
    }
    while(temp!=0)
    {
        n1+=temp%10;
        temp/=10;
    }
    printf("%d",n1);
}