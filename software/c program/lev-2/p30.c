#include<stdio.h>
int main()
{
    int num,a=1,hs=0;
    scanf("%d",&num);
    while(a<=num)
    {
        hs+=num-a;
        a++;
    }
    printf("%d",hs);
}