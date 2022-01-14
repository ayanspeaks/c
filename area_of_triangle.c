#include<stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3;
	float area;
	printf("Enter x1,x2,x3,y1,y2,y3 quadrents of the triangle respectively: ");
	scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
	area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
	printf("Area of the triangle is: %f",area);
	return 0;
}
