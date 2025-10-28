#include<stdio.h>
int main()
{
    int num,temp,num1=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",num1);
            num1++;
        }
        temp=num1-2;
        for(int j=1;j<i;j++)
        {
            printf("%d",temp--);
        

        }
        printf("\n");
    }
}