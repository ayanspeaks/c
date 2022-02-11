//Write a program that reads a line and converts it into all capitals without using any
//string library function. (input string may also contain capital letters)

#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str[100];
  	int i;
 
  	printf("\n Please Enter a String that you want to Convert into Uppercase :  ");
  	gets(Str);
  	
  	for (i = 0; Str[i]!='\0'; i++)
  	{
  		if(Str[i] >= 'a' && Str[i] <= 'z')
  		{
  			Str[i] = Str[i] -32;
		}
  	}

  	printf("\n The given String in Upper Case = %s", Str);
  	
  	return 0;
}
