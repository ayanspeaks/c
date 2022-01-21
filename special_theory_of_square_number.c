//An important property of square numbers: If a natural number is a square number, then it
//has to be the sum of Successive Odd Numbers starting from 1. like 25=1+3+5+7+9
//Now using this property, find the square root of any perfect square.
#include<stdio.h>
int main()
{
	int sum=0,i;
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
	;
	for(i=1;sum<m;i+=2){
		sum+=i;
	}
	if(sum==m)
	printf("Given number is a perfect square.\n");
	else
	printf("Given number is not a perfect square.\n");
	return 0;
}
