#include<stdio.h>
int main()
{
    int a,b,c,p;
    double r,k,s;
    k=0;
    p=0;
    r=0.0;
    while(scanf("%d",&a))
    {
        if(a<0)
            break;
        else
        {
            p=p+a;
            k++;
        }
    }
    //printf("")
    r=p/k;
    printf("%.2lf\n",r);
    return 0;
}

