#include<stdio.h>
int main()
{
	int s=0,n,a;
	float m;
	printf("Enter a number: ");
	scanf("%f",&m);
	if(m<0||floor(m)!=ceil(m))
	{
		printf("Wrong input.");
		return 0;
	}
	n=m;
	for(a=1; a <= n; a++) {
		s += a * (a+1);
		printf("Term %d of the series is: %d*%d\n",a,a,a+1);
	}
	printf("Result of the series is: %d",s);
	return 0;
}
