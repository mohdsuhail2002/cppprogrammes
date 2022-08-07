#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number you want to enter");
    scanf("%d",&x);
    y=x%10;
    printf("unit digit of %d is %d",&x,&y);
    printf("\n");
    return 0;

}