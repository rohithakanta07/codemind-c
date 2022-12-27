#include<stdio.h>
int main()
{
    float a,b,c,pf,gross;
    scanf("%f%f%f",&a,&b,&c);
    pf=(a*12)/100;
    gross=a+b+c+pf;
    printf("%0.2f
%0.2f",pf,gross);
}