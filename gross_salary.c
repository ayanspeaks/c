#include<stdio.h>
int main()
{
	float bs,da,hra,gs;
	printf("Enter your basic salary: ");
	scanf("%f",&bs);
	da=(bs/100)*40; 	
	hra=(bs/100)*20;
	gs=bs+da+hra;
	printf("Your gross salary is: %f",gs);
	return 0;
}
