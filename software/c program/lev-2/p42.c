#include<stdio.h>
int main()
{
    int num1,num2,count=0;
    scanf("%d %d",&num1,&num2);
    if(num1%2==0&&num2%2==0)
    {
    for(num1;num1<=num2;num1++)
    {
        if(num1%2==0)
        {
           count++;
        }
        if(count==2)
        {
            printf("%d",num1);
            break;
        }
    }
    }
    else{
        if(num1%2!=0&&num2%2!=0)
        {
        printf("%d and %d are not even number",num1,num2);
        } 
        else{
            printf("%d or %d is not even number",num1,num2);
        }
    }
}