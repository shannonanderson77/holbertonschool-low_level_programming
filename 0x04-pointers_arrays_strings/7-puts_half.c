#include "holberton.h"

/**
  * puts_half - a function that prints half of a string
  * followed by a new line
  * @str : takes a string value
  * Return: returns half the string, if the string is odd
  * returns length_of_string-1/2.
  */
void puts_half(char *str)
{
	int count;
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	} else
	{
		start = (len + 1) / 2;
	}
	count = start;
	while (str[count] != '\0')
	{
	_putchar(str[count]);
	count++;
	}
	_putchar('\n');
}
