#include<stdio.h>
int main()
{
    int X,Y;
    float a,b,c,d,e;
    scanf("%d%d",&X,&Y);
    if(X==1)
    {
        a=4.00*Y;
        printf("Total: R$ %.2f\n",a);
    }
    else if(X==2)
    {
        b=4.5*Y;
        printf("Total: R$ %.2f\n",b);
    }
    else if(X==3)
    {
        c=5.00*Y;
        printf("Total: R$ %.2f\n",c);
    }
    else if(X==4)
    {
        d=2.00*Y;
        printf("Total: R$ %.2f\n",d);
    }
    else if(X==5)
    {
        e=1.50*Y;
        printf("Total: R$ %.2f\n",e);
    }
    return 0;
}