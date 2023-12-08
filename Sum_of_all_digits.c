#include<stdio.h>
int main()
    {
        int x,sum=0;
        scanf("%d",&x);
        for(int i=x;i>0;i--)
        {
            int r=x%10;
             sum=sum+r;
            x=x/10;
           
        }
        printf("%d",sum);
    }