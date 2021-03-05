#include<stdio.h>
int main()
{
    float i,j,k;
    k=0.0;
    while(i<1.0)
    {
        for(j=1; j<=3; j++)
        {
            printf("I=%.0f J=%.0f\n",i,j);
        }
        i++;
    }
    for(i=0.2; i<.90; i=i+.2)
    {
        for(j=1; j<=3; j++)
        {
            k=j+i;
            printf("I=%.1f J=%.1f\n",i,k);
        }
    }
     while(i<=1)
    {
        for(j=1; j<=3; j++)
        {
            k=j+i;
            printf("I=%.0f J=%.0f\n",i,k);
        }
        i++;
    }
    for(i=1+0.2; i<1.9; i=i+0.2)
    {
        for(j=1; j<=3; j++)
        {
            k=j+i;
            printf("I=%.1f J=%.1f\n",i,k);
        }
    }
   while(i<2.1)
    {
        for(j=2.80; j<=5.00; j++)
        {
            k=j+0.2;
            printf("I=%.0f J=%.0f\n",i,k);
        }
       i=i+0.2;
    }
    return 0;
}
