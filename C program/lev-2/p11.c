#include<stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    if(num==0)
    {
        count=1;
        printf("%d",count);
    }
    else
    {
      while(num!=0)
      {
        num=num/10;
        count++;
      }
      printf("%d",count);
    }
}