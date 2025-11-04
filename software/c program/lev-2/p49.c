#include<stdio.h>
#include<math.h>
int main()
{
    int num,n1,n2=0,n3=0,n4=0;
    scanf("%d",&num);
    num/=10;
    n1=num;
    while(n1>0)
    {
       n1=n1/10;
       n2++;
    }
    n3=pow(10,n2-1);
    num%=n3;
    while(num>0)
    {
       n4+=num%10;
       num/=10;
    }
    printf("%d",n4);
}