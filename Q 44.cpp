#include<stdio.h>
int main()
{
	int v,u,a,s,t;
	printf("\nenter u:\nenter a:\nenter t ");
	scanf("%d%d%d",&u,&a,&t);
	v=u+a*t;
	s=u*t+1/2*(a*t*t);
	printf("\n%d",v);
	printf("\n%d",s);
	return 0;
}
