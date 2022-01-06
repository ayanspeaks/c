#include<stdio.h>

// Recursion

int factorial(n) {
	if(n == 0 || n == 1) return 1;
	return n * factorial(n-1);
}

int main()
{
	int i,n,fact=1;
	printf("Enter the integer to compute it's factorial: ");
	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		fact=fact*i;
//	}
//	printf("factorial of the given integer is: %d",fact);

	printf("%d", factorial(n));
	return 0;
}
