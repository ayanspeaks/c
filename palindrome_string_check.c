//Q.9) C program which accepts a string from user and checks whether it is palindrome or
//not. Do not use any string library function. [Example of a palindrome string: &quot;abcba&quot;, &quot;abba&quot;]

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[50];
	int i, len1;
    printf("Enter a word: ");
	gets(str);
	len1=strlen(str);
	int count=0;
	for(i=0;i<=len1;i++){
	if(str[i]==str[len1-i-1])
	count++;
    }
		if(count==i)
		{
			printf("Given string is palindrome.");
			return 0;
		}
		else
		{
			printf("Given string is not palindrome.");
			return 0;
		}
	return 0;	
}
