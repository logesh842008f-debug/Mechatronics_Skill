#include<stdio.h>
int main()
{
    int num,n1,rev=0;
    scanf("%d",&num);
    if(num<0)
    {
        num*=-1;
    }
    n1=num;
    while(n1>0)
    {
        int n2=n1%10;
        rev=rev*10+n2;
        n1/=10;
    }
    if(rev==num)
    {
        printf("%d is Palindrome",num);
    }
    else{
        printf("%d is Not Palindrome",num);
    }
}