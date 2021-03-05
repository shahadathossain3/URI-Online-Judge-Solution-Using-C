#include<stdio.h>
int main()
{
    int a,i,b,c,n;
    scanf("%d",&n);
    b=n;
    for(i=n-1; i>=1; i--)
    {
      b=b*i;
    }
    printf("%d\n",b);
}
