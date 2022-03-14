//Q.6) C program to count the number of occurrences of any two vowels in succession in a line of text.

#include <stdio.h>

int isVowel(char);
int main()
{
    char str[80];
    int i, found = 0, count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Vowels in successions are :\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isVowel(str[i]))
        {
            found++;
        }
        else
        {
            found = 0;
        }

        if (found == 2)
        {
            printf("%c%c\n", str[i - 1], str[i]);
            found = 1;
            count++;
        }
    }

    printf("\nTotal number of occurences : %d", count++);

    return 0;
}

int isVowel(char ch)
{
    switch (ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            return 1;
        default:
            return 0;
    }
}
