#include<stdio.h>
int main()
{
    int x,i,j;
    while(scanf("%d",&x))
    {
        if(x==0)
        {
            break;
        }
        else
        {
        for(i=1; i<x; i++)
        {
            printf("%d ",i);
        }
        printf("%d\n",x);
        }
    }
    return 0;
}
