#include<stdio.h>
 struct employee {
 char name[10];
 float salary;
 int age;
 };
int main()
{
    struct employee e1={"sanjana",30.567,45};
    struct employee e2,e3;
   // strcpy( e2.name,e1.name);
    //e2.salary=e1.salary;
   // e2.age=e1.age;
   e2=e1;
    e3=e2;
  printf("%s %f %d",e1.name,e1.salary,e1.age);
  printf("%s %f %d",e2.name,e2.salary,e2.age);
  printf("%s %f %d",e3.name,e3.salary,e3.age);
    return 0;
}