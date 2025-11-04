#include<stdio.h>
int factorial(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial*=i;
    }
    return(factorial);
}
int main()
{
    int num,n1,s=0,n2=0;
    scanf("%d",&num);
    n1=num;
    while(n1>0)
    {
        n2=n1%10;
        s+=factorial(n2);
        n1/=10;
    }
    if(num==s)
    {
    printf("%d is strong number",num);
}
   else{
    printf("%d is not strongest number",num);
   }
}