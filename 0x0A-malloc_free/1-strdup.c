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
unsigned int len;
char *p;

i = 0;
len = _strlen(str);
p = malloc(len * sizeof(*char));
if (str == NULL)
	return (NULL);
while (i <= len)
{
p[i] = str[i];
i++;
} return (p);
	free(p);
}
