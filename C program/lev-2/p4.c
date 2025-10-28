#include<stdio.h>
int main()
{
   int num1,num2,num;
   scanf("%d %d",&num1,&num2);
   num=num1;
   for(int i=0;i<num2;i++)
   {
    printf("%d",num);
     num=num*10+num1;
     if(i<num2-1)
   {
      printf("+");
   }
   }  
}