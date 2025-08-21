#include<stdio.h>
#include<math.h>
int main()
{ 
     float a,b,c,d,r1,r2;
     printf("enter value of a and b,c");
     scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
  if(d<0)

    printf(" roots are imaginary");
    else
    {
    r1=(-b+sqrt(d))/(2.0*a);
    r2=(-b-sqrt(d))/(2.0*a);
    printf("r1=%5.2f,r2=%f",r1,r2);
    }
    return 0;
}