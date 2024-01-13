#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int count;
    for(int i=0;str[i]!=NULL;i++)
    {
        count=i+1;
    }
    printf("%d",count);
}