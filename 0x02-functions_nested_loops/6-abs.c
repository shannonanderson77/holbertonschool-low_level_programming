#include "holberton.h"

/**
  * _abs - displays the absolute value of an integer
  * @r: takes the value of any integer
  * Return: absolute value
  */
int _abs(int r)
{

	if (r < 0)
		return (-r);
	else
		return (r);
}
