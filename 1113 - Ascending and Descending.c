#include<stdio.h>
int main()
{
    int a,b;
    while(1)
    {
        scanf("%d%d",&a,&b);
    if(a>b)
    {
       printf("Decrescente\n");
    }
    else if(b>a)
    {
        printf("Crescente\n");
    }
    else if(a==b)
    {
        break;
    }
    }
    return 0;
}