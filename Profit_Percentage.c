#include<stdio.h>
int main()
{
    float x,y,p,pp;
    scanf("%f%f",&x,&y);
    p=y-x;
    pp=(p*100)/x;
    printf("%.2f",pp);
    return 0;
}