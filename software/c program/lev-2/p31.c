#include<stdio.h>
int main()
{
    int num,even=2,odd=1;
    scanf("%d",&num);
    if(num>0)
    {
        if(num%2==0)
        {
          while(even<=num)
          {
            printf("%d ",even);
            even+=2;
          }
        }
        else{
            while(odd<=num)
            {
                printf("%d ",odd);
                odd+=2;
            }

        }
    }
    else{
        printf("Invalid");
    }
}