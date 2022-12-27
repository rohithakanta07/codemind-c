#include<stdio.h>
int main()
{
    int a,b,add,diff,mul,divi,mod;
    scanf("%d%d",&a,&b);
    add=a+b;
    diff=a-b;
    mul=a*b;
    divi=a/b;
    mod=a%b;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d
",add,diff,mul,divi,mod);
}