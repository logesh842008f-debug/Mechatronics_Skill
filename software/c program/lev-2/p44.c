#include<stdio.h>
#include<math.h>
int main()
{
    int num0,num,sqr,temp,count=0;
    scanf("%d",&num);
    num0=num;
    while(num0>0)
    {
       num0/=10;
       count++;
    }
    sqr=num*num;
    temp=sqr%(int)pow(10,count);
   if(num==temp)
    {
        printf("%d is an automorphic number.",num);
    }
    else{
        printf("%d is not an automorphic number.",num);
    }

}