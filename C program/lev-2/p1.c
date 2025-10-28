#include<stdio.h>
int main()
{
    int num,num1=0,num2=1,a;
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        printf("%d",num1);
        a=num1+num2;
        num1=num2;
        num2=a;
        if(i<num)
        {
            printf(",");
        }
    }
}
