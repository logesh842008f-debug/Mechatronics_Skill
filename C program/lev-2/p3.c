#include<stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    if(num<=1)
    {
        printf("neither prime nor composite.");
        return 0;
    }
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is composite number");
    }

}