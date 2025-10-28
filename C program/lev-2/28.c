#include<stdio.h>
int main()
{
    int num1,num2,a,b;
    scanf("%d %d",&num1,&num2);
    if(num1>=0&&num2>=0)
    {
     a=num1,b=num2;
     while(a!=b)
    {
        if(a<b)
        {
            a+=num1;
        }
        else{
            b+=num2;
        }
    }
    printf("%d",a);
}
    else{
        printf("Negative input");
    }
}