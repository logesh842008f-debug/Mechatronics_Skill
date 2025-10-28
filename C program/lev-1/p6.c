#include<stdio.h>
int main()
{
    char name[20];
    float percent;
    int roll,total,attended;
    scanf("%s %d %d %d",&name,&roll,&total,&attended);
    percent=((double)attended/total)*100;
    if(attended=>0)
    {
    printf("percentage %.2f %%",percent);
    }
    else{
        printf("invalid ");
    }


}
