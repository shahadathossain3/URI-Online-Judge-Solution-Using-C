#include<stdio.h>
int main()
{
    int a,j,i,k,l;
    k=0;
    scanf("%d",&a);
    if(a>0)
    {
        if(a%2==0)
        {
            j=a+1;
            printf("%d\n",j);
            for(i=1; i<=5; i++)
            {
                k=k+2;
                l=j+k;
                printf("%d\n",l);
            }
        }
        else
        {
            printf("%d\n",a);
            for(i=1; i<=5; i++)
            {
                k=k+2;
                l=a+k;
                printf("%d\n",l);
            }
        }
    }
    return 0;
}
