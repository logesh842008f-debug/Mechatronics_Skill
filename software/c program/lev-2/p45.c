#include<stdio.h>
int main()
{
    int num,n1,first,last;
    scanf("%d",&num);
    n1=num;
    last=n1%10;
    n1=num;
    while(n1>0)
    {
        first=n1;
        n1/=10;
    }
    printf("%d",first+last);
}