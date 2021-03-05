#include<stdio.h>
#include<math.h>
int main()
{
    int n,j,k,s,p,i;
    scanf("%d",&n);
    p=0;
    s=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=3; j++)
        {
            p=pow(i,j);
            if(j<=2)
            {
            printf("%d ",p);
            }
        }
        printf("%d\n",p);
        for(k=1; k<=3; k++)
        {
            s=pow(i,k);
            if(k>=2)
            {
                s+=1;
            }
            if(k<=2)
            {
            printf("%d ",s);
            }
        if(k==3)
        {
        printf("%d\n",s);
        }
        }
    }
    return 0;
}
