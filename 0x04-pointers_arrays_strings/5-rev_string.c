#include "holberton.h"

/**
  * rev_string - a function that reverses a string
  * @s: takes a string
  * Return: the string reversed
  */
void rev_string(char *s)
{
	char temp;
	char *p;

	temp = 0;
	p = s;
	while (*p != '\0')
	{
		p++;
	}
	p--;
	while (s < p)
	{
	temp = *s;
	*s = *p;
	*p = temp;
	s++;
	p--;
	}
}
