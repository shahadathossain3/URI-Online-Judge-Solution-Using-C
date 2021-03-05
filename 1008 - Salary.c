#include<stdio.h>
int main()
{
    int N,H;
    float S,SAL;
    scanf("%d%d%f",&N,&H,&S);
    SAL=H*S;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",N,SAL);
    return 0;
}