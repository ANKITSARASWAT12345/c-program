#include<stdio.h>
int main()
{
	int a,b,c,d,e,total,average,percentage;
	printf("enter a:b:c:d:e:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	average=(a+b+c+d+e)/2;
	percentage=(total/total)*100;
	printf("%d\t%d\t%d",total,average,percentage);
	return 0;
	
}
