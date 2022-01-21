#include<stdio.h>
int main()
{
	float n;
	printf("Enter a input: ");
	scanf("%f",&n);
	if(floor(n)==ceil(n))
	{
		printf("Input is integer");
	}
	else
	{
		printf("Input is decimal.");
	}
	return 0;
}
