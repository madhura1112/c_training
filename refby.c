#include <stdio.h>
struct store
{
    int marks;
    float mark;
};
void edit(struct store s1)
{
    printf("%f",s1.marks);
    s1.marks=54.6;
    
    
     printf("before change in fn : %f\n",s1.marks);
    s1.marks=54.6;
    printf("after change in fn : %f\n",s1.marks);
}

void main ()
{
    struct store s1= {89.9,3};
    edit(s1);
    printf("after change in main %f\n",s1.marks);
}

