#include<stdio.h>
int main()
{
    int i,j,n,a,temp,x,y;
    scanf("%d",&n);
    a=1;
    while(a<=n)
    {
        j=0;
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        for(i=x+1; i<y; i++)
        {
            if(i%2!=0)
            {
                j+=i;
            }
        }
        printf("%d\n",j);
        a++;
    }
    return 0;
}
