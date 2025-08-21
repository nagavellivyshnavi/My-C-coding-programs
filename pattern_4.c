#include<stdio.h>
#include<conio.h>
 void main()
{ 
    int i,j,n;
    clrscr();
    printf("ente n value");
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        
    }
    
}