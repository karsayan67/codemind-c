#include<stdio.h>
int main()
{
    int b1,b2,h;
    scanf("%d%d%d",&b1,&b2,&h);
    float at;
    at=0.5*(b1+b2)*h;
    printf("%.4f",at);
    return 0;
}