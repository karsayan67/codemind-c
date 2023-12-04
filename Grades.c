#include<stdio.h>
int main()
{
    int p,c,m,b,sc;
    scanf("%d %d %d %d %d",&p,&c,&m,&b,&sc);
    int marks=(p+c+m+b+sc)/5;
    if(marks>=90)
    {
        printf("Grade A");
    }
    else if(marks>=80 && marks<90)
    {
        printf("Grade B");
    }
    else if(marks>=70 && marks<80)
    {
        printf("Grade C");
    }
    else if(marks>=60 && marks<70)
    {
        printf("Grade D");
    }
    else if(marks>=40 && marks<60)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}