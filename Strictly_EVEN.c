#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int seven=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2!=0)
        {
            seven=0;
        }
    }
    if(seven==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}