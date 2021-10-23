#include<stdio.h>
int main()
{
	float minute,second,hour;
	printf("enter second");
	scanf("%f",&second);
	minute=second/60;
	hour=second/3600;
	printf("\n%f",minute);
	printf("\n%f",hour);
	return 0;
}
