#include "holberton.h"

/**
  * puts2 - function that prints one char out of
  * 2 of a string, followed by a new line
  * @str: takes a string
  * Return: every other char
  */
void puts2(char *str)
{
	while (*str != '\0')
	{
	if (*str % 2 == 0)
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
