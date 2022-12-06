#include<stdio.h>
int main()
{
    int a,b,p;
    scanf("%d%d",&a,&b);
    p=a*b;
    if(1<=p<=10000)
    {
        printf("%d",p);
    }
}