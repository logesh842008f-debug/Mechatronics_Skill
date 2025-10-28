#include<stdio.h>
int main()
{
    int age,gender;
    char name[20];
    scanf("%s %d %d",&name,&age,&gender);
    if(gender==1||gender==2)
    {
    if(age>=18)
    {
        printf("eligibile");
    }
    else
    {
        printf("not eligible");
    }
    if(gender==1)
    {
        printf("\nMr.%s",name);
    }
    else
    {
        printf("\nmrs.",name);
    }
}
    else
    {
        printf("please enter valid gender");
    }
}