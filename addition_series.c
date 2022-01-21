//Write a C program to find out sum of the following series.
//S=1+2+3+4+ ... +n
#include<stdio.h>
int main()
{
	int i,s=0;
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
	for(i=1;i<=(int) m;i++)
	{
		s+=i;
	}
	printf("Result of the addition series is: %d",s);
	return 0;
}
