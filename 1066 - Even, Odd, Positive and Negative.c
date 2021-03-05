#include<stdio.h>
int main()
{
    int a[5],i,k,p,r,s;
    k=0;
    p=0;
    r=0;
    s=0;
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            k++;
        }
        if(a[i]<0)
        {
            p++;
        }
        if(a[i]%2==0)
        {
            r++;
        }
        if(a[i]%2!=0)
        {
            s++;
        }
    }
    printf("%d valor(es) par(es)\n",r);
    printf("%d valor(es) impar(es)\n",s);
    printf("%d valor(es) positivo(s)\n",k);
    printf("%d valor(es) negativo(s)\n",p);
    return 0;

}
