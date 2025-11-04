#include<stdio.h>
int main()
{
    int num,product=1,digit=0;
    scanf("%d",&num);
    for(int i=num;i>0;i=i/10)
    {
        digit=i%10;
        product*=digit;
    }
    if(product==0)
    {
        printf("Invalid input");
    }
    else{
    printf("%d",product);
    }
}