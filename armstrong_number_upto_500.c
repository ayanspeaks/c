//Write a program to print out all Armstrong numbers between 1 and 500.
#include<stdio.h>
int main(){
    int num,r,sum,n,count=0;

    for(num=1;num<=500;num++){
         n=num;
         sum = 0;

         while(n!=0){
             r=n%10;
             n=n/10;
             sum=sum+(r*r*r);
         }
         if(sum==num){
             printf("%d is an Armstrong number\n ",num);
             count++;
    }
}printf("\nThere are %d Armstrong numbers between 1 & 500.",count);
    return 0;
}
