#include<stdio.h>
int main()
{
    int num1,num2,count=0;
    scanf("%d %d",&num1,&num2);
    for(int i=num1;i<=num2;i++)
    {
       for(int j=2;j<i;j++)
       {
        count=0;
         if(i%j==0)
         {
           count++;
           break;
         }
       }
       if(count==0)
       {
        printf("%d ",i);
       }
    }
}