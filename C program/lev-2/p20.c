#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    char alpha;
    alpha='A';
    if(num>0)
    {
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
          printf("%c",alpha);
        }
        alpha++;
        printf("\n");
    }
}
else{
    printf("Invalid");
}
}