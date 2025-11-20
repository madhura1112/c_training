        #include <stdio.h>
        void main()
{
        int a=80;
        int *p =&a;
        printf("a value id %d\n",a);
        printf("a address is %p\n",p);
        printf("p pointers to %d",*p);
}