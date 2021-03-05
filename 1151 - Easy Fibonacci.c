#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    a=0;
    b=1;
    c=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i<n)
        {
        printf("%d ",a);
        }
        if(i==n)
        {
            printf("%d\n",a);
        }
            c=a+b;
            a=b;
            b=c;
    }
    return 0;
}
