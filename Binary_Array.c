
#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,n,i;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<=n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    if(arr[i]==1 || arr[i]==0)
    {
        c++;
    }
}
if(c==n)
{
    printf("True");
}
else
{
    printf("False");
}
}