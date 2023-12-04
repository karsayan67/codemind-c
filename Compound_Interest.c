#include<stdio.h>
#include<math.h>
int main()
{
    int P,R,T;
    float Ci;
    scanf("%d%d%d",&P,&R,&T);
    Ci=(P*pow((1+R/100.0),T))-P;
    printf("%.2f",Ci);
    return 0;
}