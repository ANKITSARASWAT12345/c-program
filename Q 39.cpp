#include<stdio.h>
int main(){
	float basicpay,hra,ta,totalsalary;
	printf("enter basicpay");
	scanf("%f",&basicpay);
	hra=basicpay*15/100;
	ta=basicpay*20/100;
	totalsalary=basicpay+hra+ta;
	printf("%f",totalsalary);
	return 0;
}
