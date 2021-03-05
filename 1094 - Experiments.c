#include<stdio.h>
int main()
{
    int i,j,a,to,t,t1,t2,k,total,n,l;
    char ch,ch1;
    float toto,t1t1,tt,ttt;
    ch1='%';
    total=0;
    to=0;
    t=0;
    t1=0;
    t2=0;
    toto=0;
    t1t1=0;
    tt=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %c",&a,&ch);
        total=total+a;
        if(ch=='C')
        {
            to=to+a;
        }
        else if(ch=='S')
        {
            t=t+a;
        }
        else if(ch=='R')
        {
            t1=t1+a;
        }
    }
    toto=((to*1.0/total*1.0)*100.0);
    t1t1=((t1*1.0/total*1.0)*100.0);
    tt=((t*1.0/total*1.0)*100.0);
        printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",total,to,t1,t);
        printf("Percentual de coelhos: %.2f %c\nPercentual de ratos: %.2f %c\nPercentual de sapos: %.2f %c\n",toto,ch1,t1t1,ch1,tt,ch1);
       // printf("%d",to);
    return 0;
}
