#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - a function that returns the length
 * of a string
 * @s: takes a character string
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
unsigned int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
return (len);
}

/**
  * string_nconcat - a function that concatenates two strings
  * @s1: takes the first string
  * @s2: takes the second string
  * @n: takes an integer, number of bytes from s2 to concatenate
  * with s1
  * Return: a pointer to concatenated string.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int j;
char *p; /* pointer variable to concatenated string */
int total_length; /* store value of concatenated string length */

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
if (n >= _strlen(s2))
	total_length = _strlen(s1) + _strlen(s2) + 1;
else
total_length = _strlen(s1) + n + 1;
p = malloc(total_length);
if (p == NULL)
	return (NULL); /* if memory allocation fails */
i = 0;
j = 0;
while (s1[i] != '\0')
{
	p[i] = s1[i];
	i++;
}
while (s2[j] != '\0' && j <= n)
{
	p[i] = s2[j];
	i++;
	j++;
}
p[i] = '\0';
return (p);
}
