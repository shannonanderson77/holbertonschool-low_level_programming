#include "holberton.h"

/**
 * _islower - check if c is lowercase.
 * @c: an integer or character value
 * Return: 1 if c is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		_putchar('1');
	else
		_putchar('0');
	return (0);
}
