#include<stdio.h>
#include<math.h>
int main()
{
    int num,count=0,num1,n;
    float t=0;
    scanf("%d",&num);
    num1=num;
    while(num1>0)
    {
        num1/=10;
        count++;
    }
    num1=num;
    while(num1>0)
    {
        n=num1%10;
        t+=pow(n,count);
        num1/=10;
    }
    printf("%.0f",t);
    if(t==num)
    {
        printf(" is narcisstic number");
    }
    else{
        printf(" is not a narcisstic number");
    }
}