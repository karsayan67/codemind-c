#include<stdio.h>
int main()
{
    int a,b,squre,cube,i;
    scanf("%d %d",&a,&b);
    if(a<b && b-a>=2)
    {
    for(int i=a;i<b;i++)
    { if(a!=i)
        {
         squre = i * i;
         cube = i * i * i;
         printf("%d %d %d
",i,squre,cube);
        }
     }
   
    }
}