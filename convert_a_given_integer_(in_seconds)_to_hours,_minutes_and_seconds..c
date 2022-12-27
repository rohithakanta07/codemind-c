#include<stdio.h>
int main()
{
    int a,H,M,S;
    scanf("%d",&a);
    H=a/3600;
    M=(a-(3600*H))/60;
    S=(a-(3600*H)-(M*60));
    printf("H:M:S-%d:%d:%d",H,M,S);
}