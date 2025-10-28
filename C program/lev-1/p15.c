#include<stdio.h>
int main()
{
    int c,t;
    scanf("%d %d",&c,&t);
    if(c>0)
    {
        if(t<=c&&t>0)
        {
            printf("transaction approved");
        }
        else if(t<=0)
        {
            printf("Invalid transaction amount");
        }
        else
        {
            printf("transaction declined");
        }

    }
    else{
        printf("invalid credit limit");
    }
}