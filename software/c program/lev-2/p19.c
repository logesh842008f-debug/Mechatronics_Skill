#include<stdio.h>
int main()
{
    int num,even=0,odd=0,n1;
    scanf("%d",&num);
    while(num!=0)
    {
        n1=num%10;
        if(n1%2==0)
        {
            even+=n1;
        }
        else{
            odd+=n1;
        }
        num/=10;
    }
    printf("%d\n%d",even,odd);
}