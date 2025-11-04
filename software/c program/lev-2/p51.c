#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        int a=65;
        for(int j=1;j<=i;j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}