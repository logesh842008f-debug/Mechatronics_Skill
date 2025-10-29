#include<stdio.h>
int main()
{
    int cost,sell,pro;
    scanf("%d %d",&cost,&sell);
    pro=sell-cost;
    if (cost>=0 && sell>=0)
    {
        printf("p=%d\n",pro);
    if(pro==0)
    {
        printf("Result:break even");
    }
    else if (pro>0)
    {
        printf("Result:profit");
    }
    else if (pro<0)
    {
        printf("Result:loss");
    }

    }
    
    else{
        printf("cost(or)sellingcannot be negative");
    }
    


}