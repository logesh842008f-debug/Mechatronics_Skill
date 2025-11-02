#include<stdio.h>
int main()
{
    int num,s=1;
    scanf("%d",&num);
    if(num>0)
    {
        for(int i=1;i<=num;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d ",s);
                s++;
            }
            printf("\n");
        }
    }
    else{
        printf("Invaid number");
    }
}