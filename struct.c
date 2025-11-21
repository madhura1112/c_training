#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student

{
    char name[100];
    int age;
    float marks;
};
void main ()
{
    struct student s1;
    s1.age=19;
    s1.marks=89.9;
    strcpy(s1.name, "mala");
    
    struct student s2;
    s2.age=25;
    s2.marks=95.8;
    strcpy(s2.name,"malahorkeri");

    struct student s3;
    s3.age=27;
    s3.marks=98.9;
    strcpy(s3.name,"raj");

    printf("%s", s2.name);
    printf("%d", s2.marks);
}
