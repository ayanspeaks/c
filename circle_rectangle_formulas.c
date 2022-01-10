#include<stdio.h>
int main()
{
	float a,b,r,area1,peri,area2,circum;
	printf("Enter the length and breadth of the rectangle and the radius of the circle: ");
	scanf("%f %f %f",&a, &b, &r);
	area1=a*b;
	peri=2*(a+b);
	area2=3.14*r*r;
	circum=2*3.14*r;
	printf("Area and perimeter of the given rectangle are respectively: %f\t%f",area1,peri);
	printf("Area and circumference of the given circle are respectively: %f\t%f",area2,circum);
	return 0;
}
