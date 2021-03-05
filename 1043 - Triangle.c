#include<stdio.h>
int main()
{
    float A,B,C,ar;
    scanf("%f%f%f",&A,&B,&C);
    if((B+C>A)&&(C+A>B)&&(B+A>C))
    {
        printf("Perimetro = %.1f\n",A+B+C);
    }
    else
    {
        ar=1.0/2*(A+B)*C;
        printf("Area = %.1f\n",ar);
    }
    return 0;
}
