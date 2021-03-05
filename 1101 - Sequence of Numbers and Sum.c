#include<stdio.h>
int main()
{
    int m,n,a,b,i;
    while(1)
    {
    scanf("%d%d",&m,&n);
    if(m<=0||n<=0)
    {
        break;
    }
    else
    {
        b=0;
        if(m>n)
        {
            a=m;
            m=n;
            n=a;
        }
        for(i=m; i<=n; i++)
        {
            printf("%d ",i);
            b=b+i;
        }
        printf("Sum=%d\n",b);
    }
    }
    return 0;
}
