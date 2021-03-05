#include<stdio.h>
int main()
{
    int a,b,x,y;
    float c,d,e;
    scanf("%d%d%f%d%d%f",&x,&a,&c,&y,&b,&d);
    e=(a*c)+(b*d);
    printf("VALOR A PAGAR: R$ %.2f\n",e);
    return 0;
}
