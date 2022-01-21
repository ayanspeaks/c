#include<stdio.h>
int main()
{
	int i,j,k,space,rows;
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
		for(k=i-1;k>0;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
