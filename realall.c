#include <stdio.h>
#include <stdlib.h>
void main ()
{
    float*p=(float*) malloc(4* sizeof(int));

    p[0]=2;
    p[1]=3;
    p[2]=4;
    // increase size to 5 integers
    p=(int*)realloc(p,5*sizeof(int));
    p[3]=5;
    p[4]=6;
    
    for (int i=0; i<5; i++)
    printf("%d",p[i]);
    free(p);
}



