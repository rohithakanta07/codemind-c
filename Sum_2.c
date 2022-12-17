#include<stdio.h>
int main(){
    int n,i,a,m,b,p=0;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    for(i=n;i<=m;i++)
    {
        if(i%a==0 && i%b!=0)
        {
        p=p+i;
    }
    }
    printf("%d",p);
}