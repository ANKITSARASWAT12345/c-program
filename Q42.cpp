#include<stdio.h>
#include<math.h>
int main(){
	float c,wavelength,frequency;
	printf("enter wavelength");
	scanf("%f",&wavelength);
	c=3e8;
	frequency=c/wavelength;
	printf("%f",frequency);
	return 0;
}
