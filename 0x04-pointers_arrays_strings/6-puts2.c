#include "holberton.h"

/**
  * puts2 - function that prints one char out of
  * 2 of a string, followed by a new line
  * @str: takes a string
  * Return: every other char
  */
void puts2(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
	if (counter % 2 == 0)
		_putchar(*str);
		counter++;
		str++;
	}
	_putchar('\n');
}
