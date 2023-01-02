#include<stdio.h>
int main(){
    int i,n,s=0,t;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(n<s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}