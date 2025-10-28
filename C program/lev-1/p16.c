#include<stdio.h>
int main()
{
    int p,q,t;
    float dis,a;
    scanf("%d %d",&p,&q);
    t=p*q;
    if (p>0&&q>=1)
    {
    
    if(t%2==0)
    {
       dis=0.10*t;
       a=t-dis;
       printf("A=%.2f",a);
    }
    else if(t%2!=0)
    {
        dis=0.15*t;
        a=t-dis;
        printf("A=%.2f",a);
    }
}
    else if(p<0&&q<1)
    {
        printf("Invalid price and quantity");
    }
    else if(p<0)
    {
        printf("Invalid price");
    }
    else{
        printf("Invalid quantity");
    }
}