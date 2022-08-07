#include<stdio.h>
int main()
{
    int x;
    printf("enter the three digit number");
    scanf("%d",&x);
    if(x<=99)
    {
        printf("invalid entry");
    }
    else if(x>999)
    {
        printf("invalid entry");
    }
    else
    {
        x>>1;
        printf("x>>=%d",x>>1);
    }
    return 0;
}