#include<stdio.h>
#include<math.h>

int getNoOfDigits(int);

int main()
{
	int n,rem,inverse,i;
	printf("Enter a five-digit number: ");
	scanf("%d",&n);
	i = pow(10, getNoOfDigits(n)-1);
	while(n!=0)
	{
		rem=n%10;
		inverse+=rem*i;
		i/=10;
		n/=10;
	}
	printf("Inverse of the given number is: %d",inverse);
	return 0;
}

int getNoOfDigits(int n) {
	int res = 0;
	while(n) {
		res++;
		n/=10;
	}
	return res;
}
