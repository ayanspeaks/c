#include<stdio.h>
int main()
{
	int s=0,n,a;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(a=1; a <= n; a++) {
		s += a * (a+1);
	}
	printf("Result of the series is: %d",s);
	return 0;
}
