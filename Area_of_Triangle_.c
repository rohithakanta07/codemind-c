#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(1<=a<=b<=c<=1000)
    {
        float s;
        s=(a+b+c)/2.0;
        float area;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%0.2f",area);
    }
}