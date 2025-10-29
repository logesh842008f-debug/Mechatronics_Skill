#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if (x>0 && x<70)
    {
    printf("Order confirmed.Thank you");
    }
    else if (x>=70)
    {
        printf("order limit reached.thank you");
    }
    else{
        printf("order has no proper quantity.thank you");
    }
