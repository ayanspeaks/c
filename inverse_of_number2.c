//Write a C program to find the reverse of a given number.
#include<stdio.h>
int main()
{
	int rem,reverse;
	float m;
	do {
		printf("Give a correct input(a positive integer): ");
		scanf("%f", &m);
		if(m < 0) {
			if(floor(m) != ceil(m)) {
			printf("You've entered a decimal number! Please try again...\n");
		}
	} }while(floor(m) != ceil(m));
	int n=m;
	while(n)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n/=10;
	}
	if(reverse<0)
	{
	printf("Reverse of the given number is: %d",-(reverse));
    }
	else
	{
		printf("Reverse of the given number is: %d",reverse);
	}
	return 0;
}
