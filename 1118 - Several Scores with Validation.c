#include<stdio.h>
int main()
{
    int c;
    float s,k,x;
    while(k!=2)
    {
        s=0;
        c=0;
       // scanf("%d",&x);
        while(c<2)
        {
            scanf("%f",&x);
        if(x>=0&&x<=10)
        {
         s=s+x;
         c++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n",s/2);
    do
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%f",&k);
    }while(k!=1&&k!=2);
}
    return 0;
}
