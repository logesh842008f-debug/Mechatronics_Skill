#include<stdio.h>
int main()
{
    int num;
    float hs=0;
    scanf("%d",&num);
    if(num>0)
    {
    for(int i=1;i<=num;i++)
    {
       hs+=1.0/i;
    }
    printf("%.2f",hs);
}
else{
    printf("invalid input");
}
}