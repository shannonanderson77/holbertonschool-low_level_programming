#include "holberton.h"

/**
  * checker - a function that checks if number is prime
  * @x: takes an integer
  * @y: takes an integer
  * Return: an integer
  */
int checker(int x, int y)
{
if (y == 1)
	return (1);
if (y < 1)
	return (1);
if (x % y == 0)
	return (0);
else
	return (checker(x, y - 1));
}

/**
  * is_prime_number - a function that returns 1 if the input
  * integer is a prime number
  * @n: takes an integer
  * Return: 1 if n is prime, otherwise 0
  */
int is_prime_number(int n)
{
if (n == 1)
{
return (1);
}
if (n < 1)
{
return (0);
}
return (checker(n, n - 1));
}
