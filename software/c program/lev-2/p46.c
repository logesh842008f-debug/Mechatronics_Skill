#include<stdio.h>
int main()
{
    int num,even=0;
    scanf("%d",&num);
    if(num>0)
    {
    for(int i=2;i<=num;i=i+2)
    {
       even+=i;
    }
    printf("%d",even);
}
else{
    printf("%d is an invlaid input.",num);
}
}