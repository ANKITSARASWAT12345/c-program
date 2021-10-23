#include<stdio.h>
#include<math.h>
int main()
{
	float area,s,a,b,c;
	printf("enter three side of a triangle");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle =%f",area);
	return 0;
}
