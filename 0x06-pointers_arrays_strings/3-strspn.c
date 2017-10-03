#include "holberton.h"

/**
  * _strspn - a function that gets the length of a prefix substring
  * @s: string to be searched
  * @accept: substring to search for
  * Return: number of bytes that match
  */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
unsigned int count;

i = 0;
count = 0;
while (s[i] > '\0')
{	j = 0;
	while (accept[j] > '\0')
	{
		if (accept[j] == s[i])
		{count++;
		break;
		}
		j++;

	}
	if (accept[j] != s[i])
	{
		break;
	}
		i++;
}
return (count);
}
