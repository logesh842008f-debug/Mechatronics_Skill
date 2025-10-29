#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    int num=0;
    for(int i=1;a[i]!=0;i++)
    {
        char b=tolower(a[i]);
        if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
        {
            num++;
        }
    }
    printf("%d",num);
}