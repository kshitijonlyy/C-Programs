// structure 'student'

#include <stdio.h>
#include <string.h>

struct student
{
  int rollno;
  int stu_class;
  char stu_name[100];
};

int main()
{
    struct student s1;
    s1.rollno = 1;
    s1.stu_class = 9;
    strcpy (s1.stu_name, "Kartik");
    
    struct student s2;
    s2.rollno = 2;
    s2.stu_class = 10;
    strcpy (s2.stu_name, "Parmeet");
    
    struct student s3;
    s3.rollno = 3;
    s3.stu_class = 11;
    strcpy (s3.stu_name, "Vanya");
    
    printf ("roll number of first student: %d\n", s1.rollno);
    printf ("class of first student: %d\n", s1.stu_class);
    printf ("name of first student: %s\n\n", s1.stu_name);
    
    printf ("roll number of second student: %d\n", s2.rollno);
    printf ("class of second student: %d\n", s2.stu_class);
    printf ("name of second student: %s\n\n", s2.stu_name);
    
    printf ("roll number of third student: %d\n", s3.rollno);
    printf ("class of third student: %d\n", s3.stu_class);
    printf ("name of third student: %s\n\n", s3.stu_name);
    return 0;
}
