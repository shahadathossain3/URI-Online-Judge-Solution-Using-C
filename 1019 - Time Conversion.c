#include<stdio.h>
int main()
{
    int N,h,a,m,s,h1,m1,s1;
    scanf("%d",&N);
    if(N>=3600)
    {
        h=N/3600;
        a=N-(h*3600);
        m=a/60;
        s=a-(m*60);
        printf("%d:%d:%d\n",h,m,s);
    }
    else
    {
        h1=0;
        m1=N/60;
        s1=N-(m1*60);
        printf("%d:%d:%d\n",h1,m1,s1);
    }
    return 0;
}