#include<stdio.h>
#include<conio.h>
 void main()
{ 
    int i,j,n;
    clrscr();
    printf("ente n value");
    
    scanf("%d",&n);
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",i);
        }
        printf("\n");
        
    }
    
}