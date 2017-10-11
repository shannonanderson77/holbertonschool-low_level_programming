#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * alloc_grid - a function that returns a pointer to a 2
  * dimensional array of integers
  * @width: takes an integer
  * @height: takes an integer
  * Return: a pointer
  */
int **alloc_grid(int width, int height)
{
int j = 0;
int i = 0;
int **p;

if (width == 0 || height == 0)
	return (NULL);
p = malloc(height * sizeof(int*));
	if (p == NULL)
		return (NULL);
while (i < height)
{
p[i] = malloc(width * sizeof(int));
	if (p[i] == NULL)
	{
	while (i >= 0)
	{
	free(p[i]);
	i--;
	} free(p);
	return (NULL);
	}
	i++;
}
i = 0;
while (i < height)
{
	while (j < width)
	{
	p[i][j] = 0;
	j++;
	} i++;
}
return (p);
}
