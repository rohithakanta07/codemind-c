#include<stdio.h>
int main(){
    int b;
    float g1,g2,g3;
    scanf("%d",&b);
    g1=b*0.2+b*0.8+b;
    g2=b*0.25+b*0.9+b;
    g3=b*0.95+b*0.3+b;
    if(b<=10000)
 {
        printf("%.2f",g1);
    }
  else if(b<=20000)
  {
      printf("%.2f",g2);
  }
  else
   {
        printf("%.2f",g3);
    }
}