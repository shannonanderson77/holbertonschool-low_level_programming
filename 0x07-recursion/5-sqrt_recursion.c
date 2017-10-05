#include "holberton.h"

/**
  * _increment - a function that checks for square root
  * @n: takes an integer
  * @x: takes an integer
  * Return: an integer
  */
int _increment(int n, int x)
{
	if (n < 0)
		return (-1);
if (n <= x * x)
	return (x);
return (_increment(n, x + 1));

}

/**
  * _sqrt_recursion - a function that returns the
  * natural square root of a number
  * @n: takes an integer
  * Return: an integer
  */
int _sqrt_recursion(int n)
{
	int x;

	x = _increment(n, 1);
	if (n == x * x)
	return (x);
	return (-1);
}
