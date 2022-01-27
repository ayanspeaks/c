//Q.6) <h> C program to draw a empty diamond by stars.
#include<stdio.h>
int main()
{
  int i, rows, j, k, l, m;
  float n;
do {
		printf("In which row the diamond will stretch maximum?: ");
		scanf("%f", &n);
		if(n < 0) {
			printf("You've entered a negative integer! Please try again...\n");
		} else if(floor(n) != ceil(n)) {
			printf("You've entered a decimal number! Please try again...\n");
		}
	} while(m < 0 || floor(n) != ceil(n));
   rows=n;

  for( i=1; i<=rows; i++)
  {
     for( j=i; j<=rows; j++)
     {
       printf("*");
     }
     for( k=1; k<=2*i-1; k++)
     {
       if( k==(2*i-1)) printf("*");
       else printf(" ");
     }
     for(l=rows-i;l>=1;l--){
     	printf("*");
	 }
     printf("\n");
  }

  for(i=rows-1; i>=1; i--)
  {
     for(j=rows; j>=i; j--)
     {
       printf("*");
     }
     for( k=1; k<=2*i-1; k++)
     {
       if( k==(2*i-1)) printf("*");
       else printf(" ");
     }
     for(l=rows-i;l>=1;l--){
     	printf("*");
     }
     printf("\n");
  }

  return 0;
}
