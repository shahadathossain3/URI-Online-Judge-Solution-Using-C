#include<stdio.h>
int main()
{
    int c;
   double a,b,s;
   char ch;
   ch='%';
    scanf("%lf",&s);
    if(s>=0&&s<=400.00)
    {
        a=s*0.15;
        b=a+s;
        c=15;
    }
    else if(s>400&&s<=800.00)
    {
        a=s*0.12;
        b=a+s;
        c=12;
    }
    else if(s>800&&s<=1200.00)
    {
        a=s*0.10;
        b=a+s;
        c=10;
    }
    else if(s>1200&&s<=2000.00)
    {
        a=s*0.07;
        b=a+s;
        c=7;
    }
    else if(s>2000)
    {
        a=s*0.04;
        b=a+s;
        c=4;
    }
    printf("Novo salario: %.2lf\n",b);
    printf("Reajuste ganho: %.2lf\n",a);
    printf("Em percentual: %d %c\n",c,ch);
    return 0;
}
