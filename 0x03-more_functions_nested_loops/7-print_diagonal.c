#include "holberton.h"

/**
  * print_diagonal - a function that prints a diagonal line
  * @n: takes an integer and prints a diagonal n times
  * Return: a diagonal line
  */
void print_diagonal(int n)
{
	int rows;
	int spaces;

	if (n > 0)
	{
		for (rows = 0; rows < n; rows++)
		{
			for (spaces = 0; spaces < rows; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
