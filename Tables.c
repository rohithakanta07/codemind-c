#include<stdio.h>
int main()
{
    int a,b,c,p,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(i%2==1)
        {
        p=a*i;
        printf("%d x %d = %d
",a,i,p);
        }
    }
}