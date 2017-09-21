#include "holberton.h"

/**
  * print_line - a function that draws a staight line in the terminal
  * @n: takes an integer value that determines # of times '_' is printed
  * Return: a straight line of length n followed by a new
  * line or just a new line
  */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
	}
	else
		_putchar('\n');
}
