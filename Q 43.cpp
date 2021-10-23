#include<stdio.h>
#include<math.h>
int main()
{
	float u,v,a,s;
	printf("\nenter u:\nenter a:\nenter s");
	scanf("%f%f%f",&u,&a,&s);
	v=sqrt(u*u+2*a*s);
	printf("%f",v);
	return 0;
}
