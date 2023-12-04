#include<stdio.h>
int main()
{
    int r,n,rev=0,n1;
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(n1==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}