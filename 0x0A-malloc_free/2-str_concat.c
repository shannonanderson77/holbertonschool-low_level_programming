#include <stdlib.h>
#include <stdio.h>
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
  * str_concat - a function that concatenates
  * two strings
  * @s1: takes the first string
  * @s2: takes the second string
  * Return: a pointer to the concatenated strings.
  */
char *str_concat(char *s1, char *s2)
{
int i;
int j;
char *p;

j = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
p = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
if (p == NULL)
	return (NULL);
for (i = 0; i < _strlen(s1); i++)
	{
	p[j] = s1[i];
	j++;
	}
for (i = 0; i < _strlen(s2); i++)
	{
	p[j] = s2[i];
	j++;
	}
p[j] = '\0';
return (p);
}
