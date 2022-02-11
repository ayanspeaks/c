//Write a C program which accepts any string of the form “Ustad Bade Ghulam Ali
//Khan was the Tansen of the 20th century” and prints it as “Ustad|Bade|Ghulam|Ali|
//Khan|was|the|Tansen|of|the|20th|century”.

#include<stdio.h>

int main()
{
	char sentence[50]; //initializing a string.
	int i=0;
	printf("Enter a swntence: ");
	gets(sentence);
	while(sentence[i]!='\0')
	{
		if(sentence[i]==' ')
		{
			printf("|"); //printing "|" between two words.
		}
		else
		{
			printf("%c",sentence[i]); //printing the words of the string.
		}
	i++;
	}
	return 0;
}

