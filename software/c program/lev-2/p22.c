#include<stdio.h>
int main()
{
    int num,temp,digit,i=0;
    scanf("%d",&num);
    while(i<5)
    {
    int rev=0;
    temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    if(rev==num)
    {
        printf("%d ",rev);
        i++;
    }
    num++;
}
}