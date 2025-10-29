#include<stdio.h>
int main()
{
    int num,temp,digit;
    scanf("%d",&num);
    num=num+1;
    while(1)
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
        printf("%d",rev);
        break;
    }
    num++;
}
}