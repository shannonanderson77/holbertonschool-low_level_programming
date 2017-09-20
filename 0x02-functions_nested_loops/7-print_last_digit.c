#include "holberton.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: takes an integer value
  * Return: value of last digit of integer
  */
int print_last_digit(int n)
{
	n = n % 10;

	if (n > 0)
	{
		_putchar('0' + n);
	} else if (n < 0)
	{
		_putchar('0' + -n);
	} else
	{
		_putchar('0');
	} return (0);
}
