#include<stdio.h>
int main()
{
    int a,b=0,rem;
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        b=b*10+rem;
        a/=10;
    }
    printf("%d
",b);
}