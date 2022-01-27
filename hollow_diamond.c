//Q.6) <i>C program to draw a hollow diamond by stars.              
#include<stdio.h>
int main()
{
  int i, rows, j, k;
  float m;
 do {
		printf("In which row the diamond will stretch maximum?: ");
		scanf("%f", &m);
		if(m < 0) {
			printf("You've entered a negative integer! Please try again...\n");
		} else if(floor(m) != ceil(m)) {
			printf("You've entered a decimal number! Please try again...\n");
		}
	} while(m < 0 || floor(m) != ceil(m));
   rows=m;
  for( i=1; i<=rows; i++)
  {
     for( j=i; j<=rows; j++)
     {
       printf(" ");
     }
     for( k=1; k<=2*i-1; k++)
     {
       if(k==1 || k==(2*i-1)) printf("*");
       else printf(" ");
     }
     printf("\n");
  }

  for(i=rows-1; i>=1; i--)
  {
     for(j=rows; j>=i; j--)
     {
       printf(" ");
     }
     for( k=1; k<=2*i-1; k++)
     {
       if(k==1 || k==2*i-1) printf("*");
       else printf(" ");
     }
     printf("\n");
  }

  return 0;
}
