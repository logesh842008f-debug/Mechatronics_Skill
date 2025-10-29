#include<stdio.h>
int main()
{
    int base,bonus,allowance,E,s,total;
    float p;
    scanf("%d%d%d%d",&base,&bonus,&allowance,&E);
    total=base+bonus+allowance;
    s=total-E;
    p=((float)s/total)*100;
    printf("s total =%d",total);
    printf("\ns=%d",s);
    if (p>=0)
    {
    printf("\np=%.2f",p);
    }
    else{
        printf("\np=undefined");
    }

}