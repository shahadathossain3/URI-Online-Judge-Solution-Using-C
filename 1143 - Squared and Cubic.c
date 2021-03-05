#include<stdio.h>
#include<math.h>
int main()
{
    int n,j,p,i;
    scanf("%d",&n);
    if(n>1&&n<1000)
    {
    p=0;
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
    }
    }
    return 0;
}
