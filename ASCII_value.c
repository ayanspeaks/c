//Write a program to print all the ASCII values and their equivalent characters using a while
//loop. The ASCII values vary from 0 to 255. 
#include<stdio.h>
int main()
{
    char ascii;
    int i;

    for(i=0;i<=255;i++)
    {
        printf("%c = %d\n", i, i);
    }
    return 0;
}
