#include<stdio.h>
#include<string.h>
   struct student
    {
        int x;
        float y;
        char n[50];
      
      struct 
        {
           int day;
           int month;
           int year;
        }dob;
    };
   int main()
   {
   struct student student;
    printf("enter student name,marks and age");
    scanf("%d %f %s",&student.x,&student.y,student.n);
    
    student.dob.day=13;
    student.dob.month=12;
    student.dob.year=2007;
    printf("%d %f %s",student.x,student.y,student.n);
    printf("%d%d%d",student.dob.day,student.dob.month,student.dob.year);
    
    return 0;
}