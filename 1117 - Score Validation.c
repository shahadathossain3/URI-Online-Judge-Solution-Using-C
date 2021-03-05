#include<stdio.h>
int main()
{
    int c;
    double a,b,d;
    d=0;
    b=0;
    c=0;
    while(c!=2)
    {
        scanf("%lf",&a);
        if(a>=0.0&&a<=10.0)
        {
            b=b+a;
            c++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    d=b/2;
    printf("media = %.2lf\n",d);
    return 0;
}
