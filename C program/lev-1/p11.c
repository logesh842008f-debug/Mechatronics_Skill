#include<stdio.h>
#include<math.h>
int main()
{
    int u;
    float b,s,t;
    scanf("%d",&u);
    if(u>0 &&u<51)
    {
        b=0.50*u;
        s=0.20*b;
        t=s+b;
        printf("bill amount before surcharge:%.2f\n",b);
        printf("surcharge amount:%.2f\n",s);
        printf("total charge:%.2f",t);
    }
    else if(u>50 &&u<151)
    {
        b=0.75*u;
        s=0.20*b;
        t=s+b;
        printf("bill amount before surcharge:%.2f\n",b);
        printf("surcharge amount:%.2f\n",s);
        printf("total charge:%.2f",t);
    }
    else if(u>150 &&u<251)
    {
        b=1.20*u;
        s=0.20*b;
        t=s+b;
        printf("bill amount before surcharge:%.2f\n",b);
        printf("surcharge amount:%.2f\n",s);
        printf("total charge:%.2f",t);
    }
    else if(u>250&&u<(pow(2,31)-1))
    {
        b=1.50*u;
        s=0.20*b;
        t=s+b;
        printf("bill amount before surcharge:%.2f\n",b);
        printf("surcharge amount:%.2f\n",s);
        printf("total charge:%.2f",t);
    }
    else if(u==0)
    {
        s=b;
        t=s+b;
        printf("bill amount before surcharge:%.2f\n",b);
        printf("surcharge amount:%.2f\n",s);
        printf("total charge:%.2f\n",t);
        printf("Reason:no units are consumed;hence no charge is used");
    }
    else{
        printf("bill amount before surcharge:0.00");
        printf("\nsurcharge amount:0.00");
        printf("\ntotal charge:0.00");
        printf("\nreason:neagative units are invalid;hence,no charge is consumed");

    }
}
    
    
   