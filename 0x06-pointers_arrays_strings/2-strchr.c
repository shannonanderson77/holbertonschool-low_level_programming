#include "holberton.h"
#include <stdlib.h>
/**
  * _strchr - a function that locates a character
  * in a string
  * @s: takes a string to be searched
  * @c: takes a character to search for
  * Return: a pointer to the first occurrence of
  * the character c in the string s, or NULL if not found
  */
char *_strchr(char *s, char c)
{
int i;
char *ptr;

ptr = s;
for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] == c)
return (ptr + i);
}
if (c == '\0')
return (ptr + i);

return (0);
}
