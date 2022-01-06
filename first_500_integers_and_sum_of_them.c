#include<stdio.h>

// Recursion

void display(int x) {
	if(x == 1) return;
	display(--x);
	printf("%d ", x);
}

int main()
{
	int i,sum;
//	for(i=1;i<=500;i++)
//	{
//		printf("%d\t",i);
//	}
	sum=(500*501)/2;
	printf("\nsum of first 500 integers is: %d",sum);	

	display(500);
	printf("%d", sum500(500));
	return 0;
}
