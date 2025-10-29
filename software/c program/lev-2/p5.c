#include<stdio.h>
int main()
{
    int num,num1=0,num2;
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            num2=i;
            printf("%d ",num2);
            num1=num1+num2;
        }
        
    }
    printf("\n%d",num1);
    if(num1==num)
    {
        printf("\n%d is a equal number",num);
    }
    else{
        printf("\n%d is not a equal number",num);
    }
}