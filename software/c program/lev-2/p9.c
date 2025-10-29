#include<stdio.h>
int main()
{
    int num,a,b=0;
    scanf("%d",&num);
    if(num>0)
    {
    for(int i=1;i<=num;i++)
    {
       a=i;
       a=a*a;
       b+=a;
    }
    printf("%d",b);
}
else{
    printf("INVALID INPUT");
}
}