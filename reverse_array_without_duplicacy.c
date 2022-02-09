//Q.2) Write a program in C to read n number of values in an array. After that, count the total
//number of duplicate elements in that array. Then copy the elements except the duplicate
//elements of that array into another array and display this array in reverse order.

#include<stdio.h>
void main(){
	int arr[20], reverse[20], i, j, k, temp, n;
	printf("\nEnter no of elements: \n");    
    scanf("%d",&n);
    
    printf("Enter the elements: \n");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<n;k++){
					arr[k]=arr[k+1];
				}
				n--;
				j--;
			}
		}
	}
	arr[i]=arr[k+1];
	 for(i=0;i<n;i++)
    {
        reverse[i]=arr[n-i-1];
    }
     for(i=0;i<n;i++) 
   {
      printf("%d ",reverse[i]);
   }
}
