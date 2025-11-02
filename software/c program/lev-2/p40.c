#include<stdio.h>
int main()
{
    int num,s=0,a=2;
    scanf("%d",&num);
    while(num>1)
    {
        if(num%a==0)
        {
            s+=a;
            num/=a;
        }
        else
        {
            a++;
        }
    }
    printf("%d",s);
}