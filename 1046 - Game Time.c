#include<stdio.h>
int main()
{
    int a,b,c,d,e,mx;
    mx=24;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        d=(mx+b)-a;
        printf("O JOGO DUROU %d HORA(S)\n",d);
    }
    else if(a==b)
    {
        printf("O JOGO DUROU %d HORA(S)\n",mx);
    }
    else if(a<b)
    {
        e=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",e);
    }
    return 0;
}
