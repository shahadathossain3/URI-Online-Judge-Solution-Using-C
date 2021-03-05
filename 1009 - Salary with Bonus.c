#include<stdio.h>
#include<string.h>
int main()
{
    double S,T,B,SELL;
    char N;
    scanf("%s%lf%lf",&N,&S,&SELL);
    B=(15*SELL)/100;
    T=S+B;
    printf("TOTAL = R$ %.2lf\n",T);
    return 0;
}