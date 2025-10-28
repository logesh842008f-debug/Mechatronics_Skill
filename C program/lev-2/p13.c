#include<stdio.h>
int main()
{
    int num,a=1,b=1;
    scanf("%d",&num);
    if(num>0)
    {
    for(int i=1;i<=num;i++)
    {
       for(int j=1;j<=b;j++)
       {
         printf("%d ",a);
         a++;
       }
       printf("\n");
       b++;
    }
}
else{
    printf("invalid input");
}
}