#include "holberton.h"

/**
  * _puts - a function that prints a string to stdout
  * followed by a new line
  * @str: takes a character string
  * Return: void.
  */
void _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		len++;
		str++;
	}
	_putchar('\n');
}
