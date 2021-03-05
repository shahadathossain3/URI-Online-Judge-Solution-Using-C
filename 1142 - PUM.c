#include<stdio.h>
int main()
{
    int i,j,b,p,k,n;
    k=3;
    p=1;
    b=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=b; j<=k; j++)
        {
            printf("%d ",j);
        }
        printf("PUM");
        printf("\n");
        b=b+4;
        k=k+4;
    }
    return 0;
}
