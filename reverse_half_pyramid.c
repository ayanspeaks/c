#include<stdio.h>
int main()
{
	int i,j,space,rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
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
		printf("\n");
	}
	return 0;
}
