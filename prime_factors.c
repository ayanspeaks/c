//Write a program which accepts a number n and prints all prime factors of n.
#include<stdio.h>
int main()
{
	int n,i,j,count;
	float m;
	do{
		printf("Give a correct input(a positive integer): ");
		scanf("%f", &m);
		if(m < 0) {
			printf("You've entered a negative integer! Please try again...\n");
		} else if(floor(m) != ceil(m)) {
			printf("You've entered a decimal number! Please try again...\n");
		}
	} while(m < 0 || floor(m) != ceil(m));
	n=m;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					count=0;
					break;
				}
			}if(count==1)
			{
				printf("%d is a prime factor of %d.\n",i,n);	
		    }
			}}
	return 0;
}
