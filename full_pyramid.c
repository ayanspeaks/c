#include<stdio.h>
int main()
{
	int i,j,k,space,rows;
	float m;
	do {
		printf("Enter the number of rows: ");
		scanf("%f", &m);
		if(m < 0) {
			printf("You've entered a negative integer! Please try again...\n");
		} else if(floor(m) != ceil(m)) {
			printf("You've entered a decimal number! Please try again...\n");
		}
	} while(m < 0 || floor(m) != ceil(m));
	rows=m;
	for(i=1;i<=rows;i++)
	{
		for(space=rows-i;space>0;space--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=i-1;k>0;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
