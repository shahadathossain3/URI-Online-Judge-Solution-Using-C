#include<stdio.h>
int main()
{
    int a[100],e,x,d,i,k,l,m,n;
    i=0;
    d=0;
    x=0;
    while(i<100)
    {
        scanf("%d",&a[i]);
         x++;
        if(a[i]>d)
        {
            e=x;
            d=a[i];
        }
        i++;
    }
    m=0;
    while(m<99)
    {
        n=m+1;
        while(n<100)
        {
            if(a[m]<a[n])
            {
                k=a[m];
                a[m]=a[n];
                a[n]=k;
            }
            n++;
        }
        m++;
    }
    printf("%d\n",a[0]);
    printf("%d\n",e);
    return 0;
}
