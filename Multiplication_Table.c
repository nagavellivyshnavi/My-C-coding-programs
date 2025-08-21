#include<stdio.h>

int main()
{   
     int n,i,j;
    
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<=20;i++)
    {     
        j=n*i;
    
    printf(" j is %d\n",j);
    }
    
    return 0;
}