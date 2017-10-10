#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * str_concat - a function that concatenates
  * two strings
  * @s1: takes the first string
  * @s2: takes the second string
  * Return: a pointer to the concatenated strings.
  */
char *str_concat(char *s1, char *s2)
{
unsigned int i;
unsigned int j;
char *p;

p = malloc((sizeof(s1) - 1) + sizeof(s2));

for (j = 0; j != '\0'; j++)
	{
		for (i = 0; i != '\0'; i++)
		{
		p[i] = s1[i];
		i++;
		}
	p[i] = s2[j];
	j++;
	i++;
return (p);
} return (p);
}
