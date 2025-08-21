#include<stdio.h>
#include<conio.h>
void main()
{
    int n,count=0,i;
    printf("enter number");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        {    
            count++;
        }    
    }
      if (count==2)
        printf("it is a prime"); 
        else
        printf("it is not prime");
        getch();
}