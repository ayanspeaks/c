// Calculate (1@+2@+3@+....+n@), where n@ = the sum of all the factors of n.

#include<stdio.h>
int main()
{
	int n, i, j, res = 0;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	if(n < 0) {
		printf("Please enter a number greater than 0");
		return 0;
	}
	for(i=0; i<=n; i++) {
		int sumOfFactorsOfI = 0;
		for(j=1; j<=i; j++) {
			if(i % j == 0) {
				sumOfFactorsOfI += j;
			}
		}
		printf("The sum of the factors of %d is %d\n", i, sumOfFactorsOfI);
		res += sumOfFactorsOfI;
	}
	printf("\nThe result is %d", res);
	return 0;
}
