#include "holberton.h"
#include <stdio.h>

/**
  * print_array - a function that prints n elements
  * of an array of integers followed by a new line
  * @a: takes an array
  * @n: takes an integer
  * Return: print n elements of array
  */
void print_array(int *a, int n)
{
	int index;

	index = 0;
	while (index <= n - 1)
	{
	if (index < n - 1)
	printf("%d, ", a[index]);
	else
	printf("%d", a[index]);
	index++;
	}
	printf("\n");
}
