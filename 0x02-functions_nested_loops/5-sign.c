#include "holberton.h"

/**
  * print_sign - prints the sign of a number
  * @n: takes a variable n
  * Return: print + return 1 if positive
  * print 0 return 0 of zero
  * print - return -1 if negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
