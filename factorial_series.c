//C program to find out sum of the following series.
//S=1!+2!+3!+4!+ ... +n!
#include<stdio.h>
int main()
{
	int n,i,fact=1,sum=0;
	float m;
	do {
		printf("Give a correct input(a positive integer): ");
		scanf("%f", &m);
		if(m < 0) {
			printf("You've entered a negative integer! Please try again...\n");
		} else if(floor(m) != ceil(m)) {
			printf("You've entered a decimal number! Please try again...\n");
		}
	} while(m < 0 || floor(m) != ceil(m));
	n=m;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	    sum+=fact;
	    printf("\nFactorial of %d is: %d",i,fact);
	}
	printf("\nResult of the factorial series is: %d",sum);
	return 0;
}
