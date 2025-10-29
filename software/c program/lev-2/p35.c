#include<stdio.h>
int main()
{
    int num,row,i=1;
    scanf("%d",&num);
    row=num;
    if(num>0)
    {
    while(i<=num)
    {
        int j=1;
        while(j<=row)
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
        row--;
    }
}
else{
    printf("invalid input");
}
}