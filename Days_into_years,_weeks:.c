#include<stdio.h>
int days( int d)
{
    int w,y;
    y=d/365;
    w=(d%365)/7;
    printf("%d
%d
",y,w);
    return(w,y);
}
int main()
{
    int d;
    scanf("%d",&d);
    days(d);
}