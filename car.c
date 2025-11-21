// create a structure variables with name of the car, maximum speed and prize storein aarray of structures and display them
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car
{
    char name[100];
char speed[100];
int prize
};

void main()
{
int n;
printf("enter number of the car" );
scanf("%d",&n);
struct car c[n];
for (int i=0; i<n; i++)1
{
    printf("enter the name of the car:");
    scanf("%s",c[i].name);

    printf("enter the  speed:");
    scanf("%d",&c[i].speed);

    printf("enter the prize:");
    scanf("%d",&c[i].prize);


    

}
}

