/*subtraction using function*/
#include<stdio.h>
int subtract(int, int);
int main()
{
	int a, b, diff;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	diff= subtract(a, b);
	printf("subtraction=%d",diff);
	return 0;
}
int subtract(int x, int y)
{
	int d;
	d=x-y;
	return(d);
}
