#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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
char *p;

i = 0;
p = malloc(sizeof(str));
while (i <= sizeof(str))
{
p[i] = str[i];
i++;
} return (p);
if (str == NULL)
	return (NULL);
	free(p);
}
