#include<stdio.h>
int main()
{
    int i,k;
    float a,c,s;
    k=0;
    for(i=1; i<=6; i++)
    {
        scanf("%f",&a);
        if(a>0)
        {
            k++;
        }
        if(a>0)
        {
            s+=a;
           // c=s/k;
        }
    }
    c=s/k;
    printf("%d valores positivos\n",k);
    printf("%.1f\n",c);
    return 0;
}
