//fibonacci series
#include<stdio.h>
int main()
{
	int n,i,t1,t2,nextterm;
	float m;
	t1=0;
	t2=1;
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
//	n-=2;
//	printf("%d\t%d\t",t1,t2);
	while(n--)
	{
		t1=t2;
		t2=nextterm;
		printf("%d\t",nextterm);
		nextterm=t1+t2;
	}
	return 0;
}


