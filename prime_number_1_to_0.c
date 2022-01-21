//Write a C program which prints all prime numbers between 1 and 100.
#include<stdio.h>
int main()
{
	int n=1,i=2,count=0;
	while(n<=100)
	{
	while(i<=n/2)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
		i++;
	}
	if(count==0&&n!=1)
	{
		printf("%d\t",i);
	}
	n++;
    }
	return 0;
}

