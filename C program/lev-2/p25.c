#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>0)
    {
    for(int i=1;i<=num;i++)
    {
        int n=5;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",n);
            n+=5;
        }
        printf("\n");
    }
}
    else{
        printf("Invalid");
    }
}