#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer
  * @array: takes an array of integers
  * @size: takes an integer
  * @cmp: a pointer to a function
  * Return: an integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (cmp == NULL)
	return (-1);
if (array == NULL)
	return (-1);
if (size <= 0)
	return (-1);
for (i = 1; i < size; i++)
	{
	if (cmp(array[i]) != 0)
		return (i);
	} return (-1);
}
