#include<stdio.h>
int main()
{
    int num,num1=0;
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
           num1+=i;
        }
    }
    if(num1>num)
    {
        printf("%d is abundant number",num);
    }
    else{
        printf("%d is not a abundant number",num);
    }
}