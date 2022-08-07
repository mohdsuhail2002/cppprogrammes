#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the digit you want to enter");
    scanf("%d",&x);
    y=x/10;
    printf("the digit is %d after removal of last digit",y);
    printf("\n");
    return 0;
}