#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    i=1;
    j=1;
    while(i<=10)
    {
        j=i*N;
        printf("%d x %d = %d\n",i,N,j);
        i++;
    }
    return 0;
}
