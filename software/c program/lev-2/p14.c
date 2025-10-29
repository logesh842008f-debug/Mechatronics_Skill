#include<stdio.h>
int main()
{
    int num,first,last,n1,pow=1,mid,final;
    scanf("%d",&num);
    if(num>0)
    {
    last=num%10;
    n1=num;
    while(n1>=10)
    {
        n1=n1/10;
        pow*=10;
    }
    first=n1;
    mid=(num%pow)/10;
    final=last*pow+mid*10+first;
    printf("%d",final);
}
  else{
    printf("invalid input");
  }
   
}