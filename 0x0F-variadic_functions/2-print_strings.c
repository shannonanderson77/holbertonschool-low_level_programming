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
char *string_list;

va_start(strings, n);
for (i = 0; i < n; i++)
{
	string_list = va_arg(strings, char *);
	if (string_list == NULL)
		string_list = "(nil)";
	printf("%s", string_list);
	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(strings);
return;
}
