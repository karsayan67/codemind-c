#include<stdio.h>
int main()
{
    int T,S,B,TOTAL;
    scanf("%d%d%d",&T,&S,&B);
    TOTAL=(2*T*S*B*512)/1024;
    printf("%d KB",TOTAL);
    return 0;
}