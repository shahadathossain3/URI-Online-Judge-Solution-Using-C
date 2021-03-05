#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    i=0;
    j=0;
    k=0;
    while(a!=4)
    {
        scanf("%d",&a);
        if(a==1)
        {
            i++;
        }
        else if(a==2)
        {
            j++;
        }
        else if(a==3)
        {
            k++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",i,j,k);
    return 0;
}
