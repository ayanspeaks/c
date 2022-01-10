#include<stdio.h>
int main()
{
	float cen,fahr;
	printf("Enter the temperature in fahrenheit degree: ");
	scanf("%f",&fahr);
	cen=(0.56)*(fahr-32);
	printf("Given temperature in centigrade degree is: %f",cen);
    return 0;
}
