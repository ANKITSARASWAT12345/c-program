#include<stdio.h>
#include<math.h>
int main()
{
	float a,p,n,t,r;
	printf("\nenter p");
	printf("\nenter n");
	printf("\nenter t");
	printf("\nenter r");
	scanf("%f%f%f%f%f",&a,&p,&n,&t,&r);
	a=p*pow((1+r/100),t);
	printf("%f\n",a);
	return 0;
	
	
	
}
