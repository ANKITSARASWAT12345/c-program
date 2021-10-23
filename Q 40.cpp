#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,slopeofline;
	float Theeta;

	printf("enter x1\n");
	printf("enter x2\n");
	printf("enter y1\n");
	printf("enter y2\n");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	slopeofline=(y2-y1)/(x2-x1);
	Theeta=tan(90-slopeofline);
	printf("%f\n",slopeofline);
	printf("%f\n\n",Theeta);
	
		return 0;
	
	
}
