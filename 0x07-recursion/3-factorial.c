#include "holberton.h"

/**
  * factorial - a function that returns the factorial of a
  * given number
  * @n: takes an integer
  * Return: an integer
  */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
n = n *factorial(n - 1);
return (n);
}
