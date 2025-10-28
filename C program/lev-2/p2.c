#include<stdio.h>
int main()
{
  int num,sum=0,add;
  scanf("%d",&num);
  for(int i=num+1;sum<5;i++)
  {
    for(int j=2;j<i;j++)
    {
      add=0;
      if(i%j==0)
      {
        add=1;
        break;
      }
    }
    if(add==0)
    {
      printf("%d ",i);
      sum++;
    }
   
  }
}