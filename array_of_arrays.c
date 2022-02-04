/*Demo 2-D array is an array of arrays*/
#include<stdio.h>
int main()
{
	int s[4][2]={
                    {1234,56},
					{1212,33},		
					{1434,80},
					{1312,78}
	            };
	int i;
	for(i=0;i<=3;i++)
	   printf("Address of %dth 1-D array= %u\n",i,s[i]);
	return 0;   
}
