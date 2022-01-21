#include<stdio.h>
int main()
{
	char gender,qual;
	int yos,sal;
	printf("Enter the gender,years of service,qualification: ");
	scanf("%c %d %c",&gender,&yos,&qual);
	if(gender=='M'&&yos>=10&&qual=='PG')
	{
	sal=15000;
    }
	else if(gender=='M'&&yos>=10&&qual=='G')
	{
	sal=10000;
	}
	else if(gender=='M'&&yos<=10&&qual=='PG')
	sal=10000;
	else if(gender=='M'&&yos<10&&qual=='G')
	sal=7000;
	else if(gender=='F'&&yos>=10&&qual=='PG')
	sal=12000;
	else if(gender=='F'&&yos>=10&&qual=='G')
	sal=9000;
	else if(gender=='F'&&yos<10&&qual=='PG')
	{
	sal=10000;
    }
	else if(gender=='F'&&yos<10&&qual=='G')
	{
		sal=6000;
	}
	
	
	printf("Salary of the employee is: %d",sal);
	return 0;
}
