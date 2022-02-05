//Write a C program which accepts number obtained by five students in five subjects. Print the total marks obtained by all the students. Also determine the highest total marks.

#include<stdio.h>
void main() 
{
    int arr[5], i, j, n, a, maxmarks;
    for(j=1;j<=5;j++){
        printf("Enter the marks obtained by %d th student: \n",j);
        a=0;
        for (i=0;i<5;i++) 
            {
            	printf("Enter the marks obtained in %dth subject: ",i+1);
                scanf("%d",&arr[i]);
                a+=arr[i];
            }
            if(maxmarks<a)
               maxmarks=a;
			printf("The total marks obtained by %d th studnet is: %d\n", j, a);   
		}
		printf("Highest total is: %d",maxmarks);
return 0;
}  
