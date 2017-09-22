#include "holberton.h"

/**
  * print_triangle - a function that prints a triangle
  * followed by a new line
  * @size: takes an integer
  * Return: a triangle of #'s determined by size
  */
void print_triangle(int size)
{
	int row;
	int hash;
	int spaces;

if (size > 0)
	{
	for (row = 0; row < size; row++)
		{
		for (spaces = 0; spaces < size - row - 1; spaces++)
			{
			_putchar(' ');
			}
			for (hash = size - row - 1; hash < size; hash++)
				{
				_putchar('#');
				} _putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
