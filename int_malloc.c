#include <stdio.h>
#include <stdlib.h>
void main ()
{
    int *p=(int *) malloc (4*sizeof(int));
    p[0]=65;
    p[1]=76;
    p[2]=90;
    p[3]=100;
    p[4]=125;
    printf("%d",p[0]);
    free (p);
    
    }