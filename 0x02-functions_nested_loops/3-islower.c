#include "holberton.h"

/**
 * _islower - check if c is lowercase.
 * @c: an integer or character value
 * Return: 1 if c is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
