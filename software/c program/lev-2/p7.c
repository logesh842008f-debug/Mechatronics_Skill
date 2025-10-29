#include<stdio.h>
int main()
{
    int num,leap=0,not=0;
    scanf("%d",&num);
    if(num%400==0||((num%4==0)&&(num%100!=0)))
    {
        printf("%d is leap year",num);
    }
    else {
        printf("%d is not leap year",num);
    }
    for(int i=1;i<=10;i++)
    {
        num++;
        if(num%400==0||((num%4==0)&&(num%100!=0)))
        {
           leap+=1;
        }
        else{
            not+=1;
        }
      
    }
    printf("\nleap year:%d",leap);
    printf("\nNON leap year:%d",not);
}