#include<stdio.h>
int main()
{
    int N,i;
    float a,b,c,j;
    j=0;
    scanf("%d",&N);
    i=1;
    while(i<=N)
    {
        scanf("%f%f%f",&a,&b,&c);
        j=(2.0*a+3.0*b+5.0*c)/(2.0+3.0+5.0);
        printf("%.1f\n",j);
        i++;
    }
    return 0;
}
