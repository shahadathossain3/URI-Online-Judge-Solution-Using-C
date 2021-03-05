#include<stdio.h>
int main()
{
    int i,j,k,s;
    k=0;
    for(i=1; i<=9; i=i+2)
    {
        for(j=7+k; j>=5+k; j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        k=k+2;
    }
        return 0;
}
