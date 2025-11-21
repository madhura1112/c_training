// write a c program with a function of variodic function
#include <stdio.h>
#include <stdarg.h>
void add(int count,...)
{
    va_list bag;
    va_start(bag,count);
 int result;
 for (int i=1; i<=count; i++);
 {
    int n=va_arg(bag,int);

    result =result+n;

printf("%d",result);
}
va_end(bag);

}
void main ()
{
    add(4,2,3,6,7);
}
