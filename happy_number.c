//Write a C program which prints the first 10 happy numbers. If you iterate the process
//(assume maximum 100 iterations) of summing the squares of the decimal digits of a number
//and if the process terminates in 1, then the original number is called a Happy number. For
//example 7 is a happy number as 7 -> 49 -> 97 -> 130 -> 10 -> 1.

#include<stdio.h>
int main()
{
	int n,rem,sum;
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
	while(sum!=1&&sum!=4)
	{
		sum=0;
        while(n){
    	rem=n%10;
    	sum+=(rem*rem);
		n/=10;
		}
    	n=sum;
		}
    	if(sum==1)
    	printf("Happy number.");
    	else
    	printf("Unhappy number.");
	return 0;
}
