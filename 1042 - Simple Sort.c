#include<stdio.h>
int main()
{
    int i,n,p,j,r,temp,a[3],b[3];
    n=3;
    for(r=0; r<n; r++)
    {
        scanf("%d",&a[r]);
    b[r]=a[r];
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(p=0; p<n; p++)
    {
        printf("%d\n",b[p]);
    }
    printf("\n");
    for(r=0; r<n; r++)
    {
        printf("%d\n",a[r]);
    }
    return 0;
}