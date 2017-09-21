#include "holberton.h"

/**
  * print_numbers - function that prints numbers 0 thru 9
  *
  * Return: list of numbers 0 thru 9
  */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
		_putchar('\n');
}
