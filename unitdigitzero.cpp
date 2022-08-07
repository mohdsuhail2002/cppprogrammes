#include<stdio.h>
int main()
{
    int n,m,x;
    printf("enter a number");
    scanf("%d",&n);
    m=n/10;
    x=m*10;
    printf("number with unit digit 0 is %d",x);
    return 0;
}