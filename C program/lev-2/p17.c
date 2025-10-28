#include<stdio.h>
int main()
{
    int num,odd=0,even=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
       if(i%2==0)
       {
         even+=i;
       }
       else{
        odd+=i;
       }
    }
    printf("%d\n%d",odd,even);
}