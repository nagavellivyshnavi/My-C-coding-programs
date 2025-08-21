#include<stdio.h>

int main()
{    int m,d,y;

    printf("enter days");
    scanf("%d",&d);
    y=d/365;
    m=d/30;
    d=d%30;
    
    printf("m=%d,d=%d,y=%d",m,d,y);
    return 0;
}