#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - a function that prints strings
  * followed by a new line
  * @separator: string that separates strings
  * @n: number of strings
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list strings;

va_start(strings, n);
for (i = 0; i < n; i++)
{
	printf("%s", va_arg(strings, char *));
	if (i < n - 1)
		printf("%s", separator);
	else
		printf("\n");
}
va_end(strings);
return;
}
