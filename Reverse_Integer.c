#include<stdio.h>
int main()
{
    int n,r=0,k=1;
    scanf("%d",&n);
    if(n<0)
    {
        n=n*(-1);
        k=0;
    }
    while(n!=0)
    {
        r=r*10+n%10;
        n/=10;
    }
    if(k==0)
    {
        r=r*(-1);
    }
    printf("%d",r);
}