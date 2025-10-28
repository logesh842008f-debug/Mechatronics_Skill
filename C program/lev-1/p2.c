#include<stdio.h>
#include<math.h>
int main()
{
    int p;
    float r,t,a;
    scanf("%d %f %f",&p,&r,&t);
    if (r>=1.0 && r<=8.5)
    {
    if(p>=1 && p<= (pow(2,31))-1)
    {
    a=p*pow((1+(r/100)),t);
    printf("A=%.2f",a);
    }
    else{
        printf("Error: Principal amount must be between 1 and 2^31 - 1.");
    }
    }
    else{
        printf("Error: Interest rate must be between 1.0 and 8.5.");
    }
}