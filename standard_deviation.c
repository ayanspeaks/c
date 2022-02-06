//Q.11) Write a program which takes some numbers and computes the standard deviation of them.
#include<stdio.h>
#include<math.h>
int main()
{
	int i, n;
	float num[20], SD, sum, mean;
	printf("Enter number of inputs: \n");
	scanf("%d",&n);
	printf("Enter the numbers one by one: \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&num[i]);
	}
	printf("\n");
	
	sum=0.0;
	for(i=0;i<=n;i++)
	{
	sum+=num[i];	
	}
	mean=sum/n;
	
	
	for(i=0;i<n;i++)
	{
		sum=(num[i]-mean)*(num[i]-mean);
	}
	SD=sqrt(sum/(n-1));
	printf("Standard deviation of the given numbers is: %f",SD);
	return 0;
}
