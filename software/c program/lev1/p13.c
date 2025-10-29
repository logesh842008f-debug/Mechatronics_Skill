#include<stdio.h>
int main()
{
    int l,w;
    scanf("%d %d",&l,&w);
    if(l<0)
    {
        printf("shape:invalid(length cannot be negative)\nArea:invalid");
    }
    else if(w<0)
    {
        printf("shape:invalid(width cannot be negative)\nArea:invalid");
    }
    else if(l==0||w==0)
    {
        printf("shape:invalid\nArea:invalid");
    }
    else if(l==w)
    {
        printf("Shape:square\nArea:%d",l*w);
    }
    else if(l!=w)
    {
        printf("Shape:rectangle\nArea:%d",l*w);
    }
}