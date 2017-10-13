#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * array_range - a function that creates an array of integers
  * @min: takes an integer
  * @max: takes an integer
  * Return: a pointer to an array.
  */
int *array_range(int min, int max)
{
int *p;
int i;

if (min > max)
	return (NULL);
p = malloc((max - min + 1) *sizeof(int*));
if (p == NULL)
	return (NULL);
i = 0;
while (i <= max)
{
	p[i] = min;
	i++;
	min++;
}
	return (p);
}
