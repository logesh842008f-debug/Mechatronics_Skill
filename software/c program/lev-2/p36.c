#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num==0||num<0)
    {
        printf("Invalid");
    }
    else if(num%2!=0)
    {
        int  n=1,mul=1;
        while(n<=num)
        {
            mul*=n;
            n+=2;
        }
        printf("%d",mul);
    }
    else{
        printf("Please enter a valid odd number");
    }
}