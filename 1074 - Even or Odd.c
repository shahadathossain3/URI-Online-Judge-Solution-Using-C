#include<stdio.h>
int main()
{
    int N,b,c;
    b=1;
   scanf("%d",&N);
    while(b<=N)
    {
        scanf("%d",&c);
    if(c==0)
    {
        printf("NULL\n");
    }
    else if(c%2==0)
    {
        if(c>0)
        {
            printf("EVEN POSITIVE\n");
        }
        else
        {
            printf("EVEN NEGATIVE\n");
        }
    }
    else if(c%2!=0)
    {
        if(c>0)
        {
            printf("ODD POSITIVE\n");
        }
        else
        {
            printf("ODD NEGATIVE\n");
        }
    }
    b++;
    }
    return 0;
}
