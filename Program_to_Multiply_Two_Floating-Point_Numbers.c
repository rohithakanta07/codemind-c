#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float p;
    p=a*b;
    if (1<=p<=10000)
    {
        printf("%0.2f",p);
    }
}