#include "holberton.h"

/**
  * _strlen - a function that returns the length
  * of a string
  * @s: takes a character string
  * Return: length of string
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
