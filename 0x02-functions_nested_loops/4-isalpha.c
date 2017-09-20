#include "holberton.h"

/**
  * _isalpha - checks for alphabetic character
  * @c: an integer or character value
  * Return: 1 if letter, lower or uppercase else 0
  */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
