#include<stdio.h>
int main()
{
    int num,n=2,count,s;
    scanf("%d",&num);
    while(n<=num)
    {
        count=0;
        s=1;
        for(int i=2;i<n;i++)
        {

            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            while(s<=n)
            {
                printf("* ");
                s++;
            }
            printf("\n");
        }
        n++;
    }
    return 0;
}