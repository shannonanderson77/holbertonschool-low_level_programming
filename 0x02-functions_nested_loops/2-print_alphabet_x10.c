#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char p;
	char x;

	for (x = 0; x < 10; x++)
	{
	for (p = 'a'; p <= 'z'; p++)
		_putchar(p);
	_putchar('\n');
	}
}
