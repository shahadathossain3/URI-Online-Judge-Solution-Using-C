#include<stdio.h>
int main()
{
    int N,h,a,m,s,h1,m1,s1;
    scanf("%d",&N);
    if(N>=365)
    {
        h=N/365;
        a=N-(h*365);
        m=a/30;
        s=a-(m*30);
        printf("%d ano(s)\n",h);
        printf("%d mes(es)\n",m);
        printf("%d dia(s)\n",s);
    }
    else
    {
        h1=0;
        m1=N/30;
        s1=N-(m1*30);
        printf("%d ano(s)\n",h1);
        printf("%d mes(es)\n",m1);
        printf("%d dia(s)\n",s1);
    }
    return 0;
}
