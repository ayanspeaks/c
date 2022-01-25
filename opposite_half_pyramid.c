#include<stdio.h>
int main()
{
	int rows, i, j;
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
	for(i=rows;i>=0;i--){
		for(j=i-1;j>=0;j--){
		printf("%d",j);
	}
	printf("\n");
	}
	return 0;
}
