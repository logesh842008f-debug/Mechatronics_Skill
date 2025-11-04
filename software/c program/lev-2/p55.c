#include<stdio.h>
int main()
{
    int num,n1,sum=0;
    scanf("%d",&num);
    n1=num;
    while(n1>0)
    {
        sum+=n1%10;
        n1/=10;
    }
    if(num%sum==0)
    {
        printf("%d is Harshad number.",num);
    }
    else{
        printf("%d is not Harshid number.",num);
    }
}