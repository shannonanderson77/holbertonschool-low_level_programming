#include "holberton.h"

/**
  * _strpbrk - a function that searches a string for any
  * of a set of bytes.
  * @s: takes a string to be searched
  * @accept: takes a string to match a byte from
  * Return: a pointer to the first matched byte
  */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
while (s[i] > '\0')
{
	j = 0;
	while (accept[j] > '\0')
	{
	if (s[i] != accept[j])
	{break;}
	j++;
	} 
	if (s[i] == accept[j])
	{break;}
	i++;
}
return (s);
}
