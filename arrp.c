#include <stdio.h>
void main()
{
    int arr[4]={54,67,89,76};
    int *p=arr;
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
}