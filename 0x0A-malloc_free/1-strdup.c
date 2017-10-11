#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - a function that returns the length
 * of a string
 * @s: takes a character string
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;
	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}

/**
  * _strdup - a function that returns a pointer to a newly
  * allocated space in memory which contains a copy of the
  * string given as a parameter
  * @str: takes a string
  * Return: a pointer.
  */
char *_strdup(char *str)
{
unsigned int i;
unsigned int len;
char *p;

i = 0;
if (str == NULL)
	return (NULL);
len = _strlen(str);
p = malloc(len * sizeof(char));
if (p == NULL)
	return (NULL);
while (i <= len)
{
p[i] = str[i];
i++;
}
return (p);
}
