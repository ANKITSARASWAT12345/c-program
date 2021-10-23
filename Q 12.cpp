#include<stdio.h>
#include<math.h>
int main()
{
	float area,a,b,h;
	printf("enter the sides of trapezium");
	scanf("%f%f%f",&a,&b,&h);
	area=((a+b)/2)*h;
	printf("%f",area);
	return 0;
}
