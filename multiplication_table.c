//Write a program to print the multiplication table of the number entered by the user. The
//table should get displayed in the following form.
//29 * 1 = 29
//29 * 2 = 58
//... ... ...

#include<stdio.h>
int main()
{
	int i,m;
	float n;
	do {
		printf("Give a correct input: ");
		scanf("%f", &n);
		if(floor(n) != ceil(n)) {
		printf("You've entered a decimal number! Please try again...\n");
		}
	}while(floor(n) != ceil(n));
	m=n;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",m, i,m*i);
	}
	return 0;
}
