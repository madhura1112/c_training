#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    struct student*P= &s1;
    strcpy (P->name,"mala");
    P-> age =19;
    P-> marks =98.9;
    printf("%d",P->age);
    printf("%f",P->marks);
    printf("%s",P->name);
}