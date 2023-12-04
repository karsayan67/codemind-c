#include<stdio.h>
int main()
{
    int a,b,sum=0,c=1,d;
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        d=a%10;
        sum+=d;
        c*=d;
        a/=10;
    }
    if(sum==c)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}