#include "holberton.h"

/**
  * _puts_recursion - a function that prints a string
  * followed by a new line
  * @s: takes a string to be printed
  * Return: nothing.
  */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
if (s[i] == '\0')
{
	_putchar('\n');
return;
}
_putchar(s[i]);
_puts_recursion(s + 1);
i++;
return;
}
