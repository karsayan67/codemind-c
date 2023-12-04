#include<stdio.h>
int main()
{
    int n,r,k=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(k<r)
        {
            k=r;
        }
        n=n/10;
    }
    printf("%d",k);
}