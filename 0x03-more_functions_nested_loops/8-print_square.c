#include "holberton.h"

/**
  * print_square - function that prints a square
  * @size: takes an integer
  * Result: a square of #'s with dimension of size
  */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
		{
				_putchar('#');
		}
			_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
