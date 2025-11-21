// write a function which will multiply three numbers with call by
#include <stdio.h>
void prod_value(int a,int b,int c)
{
    int prod =a*b*c;
    printf("%d",prod);

}
void prod_ref(int *a,int *b, int *c)
    {
        int prod =*a**b**c;
        printf("%d",prod);
    }
    void main()
        {
            int a=80;
            int b=99;
            int c=78;
            printf("call by value:\n");
            prod_value(a,b,c);// call by value
            printf("call by referrence:\n"); 
            prod_value(*&a,*&b,*&c); // by ref
        }
    

