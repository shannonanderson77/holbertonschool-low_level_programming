#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - a function that prints numbers
  * followed by a new line
  * @separator: takes a string to separate numbers
  * @n: takes an integer telling function how many
  * numbers it will be given
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list a_list;

va_start(a_list, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(a_list, int));
	if (i < n - 1)
	printf("%s", separator);
	else
	printf("\n");
}
va_end(a_list);
return;
}
