#include<stdio.h>
int main()
{
    int num,s=0,odd=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
      printf("%d ",odd);
      s+=odd;
      odd+=2;
    }
    printf("\n%d",s);
}