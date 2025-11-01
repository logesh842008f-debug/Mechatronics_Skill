#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>0)
    {
        int num1=0,num2=1,s;
        while(num1<num)
        {
            if(num1%2==0)
            {
                printf("%d ",num1);
            }
        s=num1+num2;
        num2=num1;
        num1=s;
        }
    }
    else{
        printf("Invalid");
    }
}