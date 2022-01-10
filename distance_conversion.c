#include<stdio.h>
int main()
{
	float d,m,n,o,p;
	printf("Enter the distance in km: ");
	scanf("%f",&d);
	m=d*1000;
	n=d*3280.84;
	o=d*39370.1;
	p=d*100000;
	printf("The distance in meters, feet, inches, centimeters are respectively: %f\t %f\t %f\t %f\t",m,n,o,p);
	return 0;
}
