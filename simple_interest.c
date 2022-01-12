#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	printf("Enter the principal number of years and rate of interest respectively: ");
	scanf("%d %d %f",&p, &n, &r);
	si=p*n*r/100;
	printf("Your simple interset is: %f",si);
	return 0;
}
