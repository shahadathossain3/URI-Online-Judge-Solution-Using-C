#include<stdio.h>
int main()
{
    double A,B,C,D,E,K;
    scanf("%lf%lf%lf",&A,&B,&C);
    K=sqrt(B*B-4*A*C);
    if(K>0&&A!=0)
    {
        D=((-B+K)/(2*A));
        E=((-B-K)/(2*A));
        printf("R1 = %.5lf\n",D);
        printf("R2 = %.5lf\n",E);
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}