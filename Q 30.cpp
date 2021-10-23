#include<stdio.h>
int main()
{
	float p,r,t,simpleinterest;
	printf("\nenter p:\nenter r\n:enter t:");
	scanf("%f%f%f",&p,&r,&t);
	simpleinterest=p*r*t;
	printf("%f",simpleinterest);
	return 0;
}
