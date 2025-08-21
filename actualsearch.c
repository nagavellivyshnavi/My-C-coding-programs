#include<stdio.h>
#include<conio.h>
int main()
{
int key,i;
     
     
     int a[5]={1,2,30,4,5};
     printf("enter key word");
     scanf("%d",&key);
     for(i=0;i<5;i++)
     {
     if (a[i]==key)
     {
     printf("enter element found is %d ",key);
     }
     else
     {
     printf("enter element not found");
     }
     }
      return 0;
      
    }