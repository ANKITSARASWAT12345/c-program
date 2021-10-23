#include<stdio.h>
#include<math.h>
int main()
{
	int base,exponents,result;
	printf("enter base");
	scanf("%d",&base);
	printf("enter exponents");
	scanf("%d",&exponents);
	result=base^exponents;
	printf("%d",result);
	
	return 0;
}
