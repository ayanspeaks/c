#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	float r,phi;
	printf("Enter the Cartesian co-ordinates of the point: ");
	scanf("%d %d",&x,&y);
	r=sqrt(x*x+y*y);
	phi=pow(tan(y/x),-1);
	printf("The polar co-ordinates of the given point is: %f %f",r,phi);
	return 0;
}
