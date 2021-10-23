#include<stdio.h>
int main()
{
int radius,diameter,circumference;
printf("enter radius");
scanf("%d",&radius);
diameter=2*radius;
circumference=2*3.14*radius;
printf("\n%d\n%d",diameter,circumference);
return 0;	
}
