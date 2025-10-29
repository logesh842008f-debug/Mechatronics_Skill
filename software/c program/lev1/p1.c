#include<stdio.h>
int main()
{
    int sal;
    float bon;
    char gen;
    scanf("%d %c",&sal,&gen);
    if (sal>0 )
    {
    if ( gen=='M'|| gen=='F')
    {
    if (sal<25000 && sal>0)
    {
        bon=5000;
        printf("bonus %.2f",bon);
    }
     if (sal>=25000 && sal<=50000)
    {
        bon=7500;
        printf("bonus %.2f",bon);
        
    }
    if (sal>50000 && gen=='M')
    {
        bon=((sal*10)/100);
        printf("bonus %.2f",bon);
    }
    if (sal>50000 &&gen=='F')
    {
        bon=((sal*15)/100);
        printf("bonus%.2f",bon);
    }
}
    else{
        printf("invalid gender");
    }
}
    else{
        printf("imvalid salary,no bonus");
    }
}
