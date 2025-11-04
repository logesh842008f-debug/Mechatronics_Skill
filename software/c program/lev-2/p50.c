#include<stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    if(num>0)
    {
    for(int i=1;i<num;i++)
    {
        if(i*i==num)
        {
            printf("%d is a perfect square",num);
            count++;
        }
    }
    if(count!=1)
    {
       printf("%d is not a perfect number",num);
       
    }
}
else{
    printf("%d is invalid number",num);
}
}