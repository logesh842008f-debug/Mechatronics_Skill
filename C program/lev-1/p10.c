#include<stdio.h>
#include<math.h>
int main()
{
    int basic;
    float hra,da;
    scanf("%d",&basic);
    if(basic<=10000&&basic>0)
    {
    hra=(basic*20.0)/100;
    da=(basic*80.0)/100;
    printf("gross salary:%.2f",hra+da+basic);
    }
    else if(basic>10000&&basic<=20000)
    {
    hra=(basic*25.0)/100;
    da=(basic*90.0)/100;
    printf("gross salary:%.2f",hra+da+basic);
    }
    else if(basic>20000&&basic<=(pow(2,31)-1))
    {
    hra=(basic*30.0)/100;
    da=(basic*95.0)/100;
    printf("gross salary:%.2f",hra+da+basic);
    }
    else{
        printf("invalid salary");
    }
}