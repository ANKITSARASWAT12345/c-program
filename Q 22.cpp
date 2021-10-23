#include<stdio.h>
int main()
{
	float celcius,farnehite;
	printf("enter temperature in farnehite");
	scanf("%f",&farnehite);
	celcius=(farnehite*32)/1.8;
	printf("%f",celcius);
	return 0;
}
