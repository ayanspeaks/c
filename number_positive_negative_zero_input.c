//Write a C program which accepts n integers and displays the counts of positives, negatives
//and zeros entered.
#include<stdio.h>
int main()
{
	int n,x,positiveCount=0,negativeCount=0,null=0;
	float m,input;
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
	while(n)
	{
	do{
		printf("Enter input: ");
		scanf("%f", &input);
		if(floor(input) != ceil(input)) {
			printf("You've entered a decimal number! Please try again...\n");
		}
	} while(floor(input) != ceil(input));
	    x=input;
		if(x>0)
		{
			positiveCount++;
		}
		else if(x<0)
		{
			negativeCount++;
		}
		else
		{
			null++;
		}
		n--;
	}
	printf("Number of positive, negative and zero are respectively: %d\t%d\t%d",positiveCount,negativeCount,null);
	return 0;
}
