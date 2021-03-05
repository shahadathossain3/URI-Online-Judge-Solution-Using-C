#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    i=1;
    while(i<10000)
    {
        if(i%N==2)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
