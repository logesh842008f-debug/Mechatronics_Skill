#include<stdio.h>
#include<math.h>
int main()
{
    int num,time=3,cube;
    scanf("%d",&num);
    if(num>0)
    {
       for(int i=1;i<=time;i++)
       {
         cube=pow(num,3);
         printf("%d\n",cube);
         num++;
       }
    }
    else{
        printf("invalid");
    }
}