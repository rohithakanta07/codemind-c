#include<stdio.h>
#include<math.h>
int dist (int x1,int y1,int x2,int y2)
{
    float c;
    c=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("%0.4f",c);
    return (c);
}
int main()
{
   int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2); 
    dist(x1,y1,x2,y2);
}