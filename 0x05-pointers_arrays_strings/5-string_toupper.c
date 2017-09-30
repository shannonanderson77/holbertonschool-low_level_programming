#include "holberton.h"

/**
  * string_toupper - a function that changes all lowercase
  * letters of a string to uppercase
  *
  * Return: a string
  */
char *string_toupper(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
	if (s[i] > 96 && s[i] < 123)
	{
	s[i] = s[i] - 32;
	} i++;
}
return (s);
}
