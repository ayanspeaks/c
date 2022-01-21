#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,o,space,rows;
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
			printf("*");
		}
		for(k=i-1;k>0;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(l=i;l>0;l--){
		for(m=0;m>=i-l;l++)
		{
			printf(" ");
		}
		for(n=l;n>0;n--)
		{
			printf("*");
		}
		for(o=l-1;o>0;o--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
