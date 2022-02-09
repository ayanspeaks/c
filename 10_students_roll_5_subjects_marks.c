//Write C program which accepts roll numbers of ten students and marks obtained by them in five subjects and prints the names of the students who have obtained highest and second highest marks subject wise.
#include<stdio.h>
int main() 
{
    int roll,marks[1000], i, j, n, a, maxmarks;
    char name[20];
    for(j=1;j<=10;j++){
        printf("Enter the roll number of %d th student: ",j);
        	scanf("%d",&roll);
        a=0;
        for (i=0;i<5;i++) 
            {
            	printf("Enter the marks obtained in %dth subject: ",i+1);
                scanf("%d",&marks[i]);
                a+=marks[i];
            }
            if(maxmarks<a){
               maxmarks=a;
		//	printf("The total marks obtained by %d th studnet is: %d\n", j, a);   
		}printf("The total marks obtained by %d th studnet is: %d\n", j, a);  
	//	printf("Name of the student who got the highest total is: ");
	//	scanf("%c",&name[20]);
		
	}
		printf("Highest total is: %d",maxmarks);
		printf("Name of the student who got the highest total is: ");
		scanf("%c",&name[20]);
return 0;
}  
