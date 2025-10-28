#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d %d",&n,&d);
    if(1<=n&&n<=6&&d>0)
    {
    if(n%2==0)
    {
        printf("player moves backward %d units",d/3);
    }
    if(n%2!=0)
    {
        printf("player moves forward %d units",d*3);
    }
   
}
    else if(d<0)
    {
        printf("Invalid position of the player");
    }
    else{
        printf("Invalid dice roll");
    }
    
}