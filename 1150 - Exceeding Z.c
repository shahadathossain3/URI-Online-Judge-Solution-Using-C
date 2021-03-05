#include<stdio.h>
int main()
{
    int x,z,c,d,k;
    k=0;
    d=0;
    scanf("%d%d",&x,&z);
    while(x>=z)
        scanf("%d",&z);
        c=x;
    if(z>x)
    {
        while(1)
        {
            d+=c;
            c++;
            k++;
            if(d>z)
               break;
        }
    printf("%d\n",k);
    }
    return 0;
}

