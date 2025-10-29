#include<stdio.h>
int main()
{
    int num,a=1,num2;
    float num1=0;
    scanf("%d",&num);
    if(num>0)
    {
        for(int i=1;i<num;i++)
        {
            a*=2;
            num1+=1/2*a;
        }
        printf("%0.2f",num1+num2);
    }
    else{
        printf("0.00");
    }
}