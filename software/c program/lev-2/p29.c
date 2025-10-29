#include<stdio.h>
int main()
{
    int num,a=1,div=0,b;
    scanf("%d",&num);
    if(num>0)
    {
        while(a<num)
        {
            if(num%a==0)
            {
              div+=a;
              b=a;
            }
            a++;
        }
        if(div==num)
        {
            printf("%d",b);
        }
        else{
            printf("%d",num);
        }
    }
    else{
        printf("Invalid");
    }
}