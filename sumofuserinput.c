#include<stdio.h>
int main()
{
    int n,m,sum=0;
    printf("enter three digit number");
    scanf("%d",&n);
    while(n>0)
    { 
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("sum=%d",sum);
    return 0;
}