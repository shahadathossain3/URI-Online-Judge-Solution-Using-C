#include<stdio.h>
int main()
{
    int k,i;
    float s,m,n;
    scanf("%d",&k);
    i=1;
    while(i<=k)
    {
    scanf("%f%f",&m,&n);
    if(m!=0&&n!=0)
    {
        s=m/n;
        printf("%.1f\n",s);
    }
    else if(m!=0&&n==0)
    {
        printf("divisao impossivel\n");
    }
    else if(m==0&&n!=0)
    {
        printf("0.0\n");
    }
    i++;
    }
    return 0;
}
