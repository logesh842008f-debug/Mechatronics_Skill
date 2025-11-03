#include<stdio.h>
int main()
{
    int num0,num,sqr,temp,count=0;
    scanf("%d",&num);
    num0=num;
    while(num0>0)
    {
       num0/=10;
       count++;
    }
    sqr=num*num;
    int mod=1;
    for(int i=0;i<count;i++)
    {
        mod*=10;
    }
    if(sqr%mod==num)
    {
       printf("%d is an automorphic number.",num);
    }
    else{
        printf("%d is not an automorphic number.",num);
    }
}