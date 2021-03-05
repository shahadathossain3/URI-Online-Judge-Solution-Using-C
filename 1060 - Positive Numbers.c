#include<stdio.h>
int main()
{
    int i,k;
    float a;
    k=0;
    for(i=1; i<=6; i++)
    {
        scanf("%f",&a);
        if(a>0)
        {
            k++;
        }
    }
    printf("%d valores positivos\n",k);
    return 0;
}
