#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
       printf("hi");
    }
    else if (a==0)
    {
        printf("no cash needed");
    }
    else if (a<0)
    {
        printf("invalid amount");
    }

}