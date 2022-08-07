#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number and digit");
    scanf("%d %d",&x,&y);
    if(y>9)
    {
        printf("invalid entry");
    }
    else if(y<0)
    {
        printf("invalid entry");
    } 
    else
    {
    x*=10;
    x+=y;
    printf("x=%d",x);
    }
    return 0;
}