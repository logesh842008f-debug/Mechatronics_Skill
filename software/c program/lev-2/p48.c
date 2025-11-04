#include<stdio.h>
int main()
{
    int num,n1,n2,rev=0;
    scanf("%d",&num);
    if(num>0)
    {
    n1=num;
    while(n1>0)
    {
       n2=n1%10;
       rev=rev*10+n2;
       n1/=10;
    }
    printf("%d",rev);
}
else{
    printf("%d is not a positive number",num);
}
}