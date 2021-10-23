#include<stdio.h>
int main()
{
	float days,months,year;
	printf("enter days");
	scanf("%f",&days);
	months=days/30;
	year=days/365;
	printf("\n%f",months);
	printf("\n%f",year);
	return 0;
}
