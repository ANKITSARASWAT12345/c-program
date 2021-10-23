#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;
	printf("enter angle1:,angle2:");
	scanf("%d%d",&angle1,&angle2);
	angle3=180-(angle1+angle2);
	printf("%d",angle3);
	return 0;
}
