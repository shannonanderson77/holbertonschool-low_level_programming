#include "holberton.h"

/**
  * _sqrt_recursion - a function that returns the
  * natural square root of a number
  * @n: takes an integer
  * Return: an integer
  */
int _sqrt_recursion(int n)
{
if (n != 0 || n != 1 || n != 4 || n != 7)
{
	return (-1);
}
n = _sqrt_recursion((n % 10) + (n / 10) % 10);
return (n);
}
