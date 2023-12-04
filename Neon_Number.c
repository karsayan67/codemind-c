#include<stdio.h>
int main()
{
    int n,r,k,sum=0;
    scanf("%d",&n);
    r=n*n;
    for(int i=1;i<=r;i++)
    {
        k=r%10;
        sum=sum+k;
        r=r/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}