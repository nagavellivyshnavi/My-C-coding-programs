#include<stdio.h>

int main()
{    
    int s1,s2,s3,s,largeside;
    printf("\n enter three sides of triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>s2)
    {
        if(s1>s3)
        {
        s=s2+s3; largeside=s1;
        }
        else
        {
        s=s1+s2; largeside=s3;
        }
     }
     else
  {
     if(s2>s3)
     {
     s=s1+s3; largeside=s2;
     }
     else
     {
     s=s1+s2; largeside=s3;
     }
  }
  if (s>largeside)
   printf("triangle is valid\n");
  else
   printf("triangle is non valid \n");
  return 0;
}