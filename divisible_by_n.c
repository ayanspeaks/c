//write a C program which prints all integers divisible by n between 1 and 100 where value of n is provided by the user.
#include<stdio.h>
int main()
{
	int i,m;
	float n;
	do {
		printf("Give a correct input(a positive integer): ");
		scanf("%f", &n);
		if(n < 0) {
			printf("You've entered a negative integer! Please try again...\n");
		}else if(n>0){
			printf("You've entered an integer greater than 100! Please try again...\n");
		} else if(floor(n) != ceil(n)) {
			printf("You've entered a decimal number! Please try again...\n");
		}
	} while(n < 0 ||n>100|| floor(n) != ceil(n));
//	if(n<0||n>100)
//	{
//		printf("Wrong input.");
//	}
//	if(floor(n)!=ceil(n))
//	{
//		printf("Wrong input.");
//		return 0;
//	}
	for(i=1;i<101;i++)
	{
	    if(i%(int)n==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
