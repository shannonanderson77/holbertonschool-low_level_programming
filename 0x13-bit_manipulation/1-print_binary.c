#include "holberton.h"

/**
  * print_binary - a function that prints the binary representation
  * of a number
  * @n: a decimal number
  * Return: void
  */
void print_binary(unsigned long int n)
{
if (n == 0)
	return;
print_binary(n >> 1);
if ((n & 1) != 1)
{
	_putchar('0');
}
	else
{
	_putchar('1');
}
}
