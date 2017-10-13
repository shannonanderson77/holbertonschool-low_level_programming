#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * _calloc - a function that allocates for an array using malloc
  * @nmemb: takes an unsigned integer
  * @size: takes an unsigned integer
  * Return: nothing
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0)
	return (NULL);
if (size == 0)
	return (NULL);

p = malloc(nmemb * sizeof(int) * size);
if (p == NULL)
	return (NULL); /* if malloc fails, _calloc returns NULL */

for (i = 0; i <= nmemb; i++)
{
p[i] = 0;
}
return (p);
}
