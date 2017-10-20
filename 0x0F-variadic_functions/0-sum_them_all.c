#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - a function that returns the sum of all
  * its parameters
  * @n: takes an unsigned int as parameter
  * Return: an int that's the sum
  */
int sum_them_all(const unsigned int n, ...)
{
va_list a_list;
unsigned int i;
int sum;

if (n == 0)
	return (0);
va_start(a_list, n);
sum = 0;
for (i = 0; i < n; i++)
{
	sum += va_arg(a_list, int);
}
	va_end(a_list);
return (sum);
}
