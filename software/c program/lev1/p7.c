#include<stdio.h>
int main()
{
    int h1,h2,m1,t;
    scanf("%d",&t);
    if (t==0)
    {
        printf("12-hour time:12Am");
    }
    else
    {
    h1=t/100;
    m1=t%100;
    if (h1==12&&m1>=60)
    {
        printf("12-hour time:12:%d",m1);
    }
    else if(h1>0&&h1<12&&m1<=60)
    {
        h2=h1;
        printf("12-hour time:%02d:%02dam",h2,m1);
    }
    
    else if(h1>12&&h1<24&&m1<=60)
    {
        h2=h1-12;
        printf("12-hour time:%02d:%02dpm",h2,m1);
    }
    else{
        printf("invalid railway");
    }
}

}