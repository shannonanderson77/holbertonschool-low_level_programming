#include "holberton.h"
/**
* print_alphabet - print alphabet in lowercase.
*
* Return: Always 0.
*/
void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	_putchar(p);
	_putchar('\n');
}
