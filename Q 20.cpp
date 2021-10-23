#include<stdio.h>
int main()

{
int cm,m,km;
printf("enter length in cm");
scanf("%d",&cm);
m=cm/100;
km=cm/100000;
printf("%d\n%d\n%d",cm,m,km);	
}
