#include<stdio.h>
int main()
{
	int i,j,k,l,m,space,rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(space=rows/2-i;space>0;space--)
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
		for(l=rows/2;l>0;l--)
		{
			printf("%d",l);
		}
		for(m=rows/2;m>0;m--)
		{
			printf("%d",m);
		}
		printf("\n");
	}
	return 0;
}
