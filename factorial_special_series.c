//Write a program to add first seven terms of the following series using a for loop:
//1/1!+2/2!+3/3!+?
#include<stdio.h>
int main()
{
	int i,j;
	float sum=0.0,fact;
	for(i=1;i<=7;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact*=j;
		}
		sum+=i/fact;
	}
    printf("%f",sum);
	return 0;
}
