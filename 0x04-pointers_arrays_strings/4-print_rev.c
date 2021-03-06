#include "holberton.h"

/**
  * print_rev - a function that prints a string
  * in reverse followed by a new line
  * @s: takes a string
  * Return: void.
  */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

/**
  * _strlen - a function that gives the length of a string
  * @s: takes s string
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
