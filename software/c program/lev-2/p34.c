#include<stdio.h>
int main()
{
    int num,temp,n,n1,org=0,place=1;
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        n=num%10;
        n=(n+1)%10;
        org=org+n*place;
        place*=10;
        num/=10;
    }
    printf("%d",org);
}