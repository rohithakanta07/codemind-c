#include<stdio.h>
int main()
{
    float n,m,avg;
    scanf("%f%f",&n,&m);
    avg=(n+m)/2.0;
    if(1<=n && m<=1000)
    {
        printf("%0.4f",avg);
    }
}