#include<stdio.h>
int main()
{
	int num,count;
	printf("Enter a number: ");
	scanf("%d",&num);
	count=0;
	while(num>1){
		if(num%2==0){
			num/=2;
			printf("\nNext value is: %d",num);
		}
		else{
			num=num*3+1;
			printf("\nNext value is: %d",num);
		}count++;
	}
	printf("\nNumber of steps: %d",count);
	return 0;
}
