#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_all - a function that prints anything
  * @format: a list of types passed to the function
  * Return: void
  */
void print_all(const char * const format, ...)
{
va_list a_list;
char *s;
int i;


va_start(a_list, format);

i = 0;
while (format[i] != '\0')
{
switch(format[i]) {
	case 'c':
		printf("%c", (char) va_arg(a_list, int));
		break;
	case 's':
		s = va_arg(a_list, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		break;
	
	case 'f':
		printf("%f", va_arg(a_list, double));
		break;
	case 'i':
		printf("%d", va_arg(a_list, int));
		break;
	} 
if ((format[i] == 'c' || format[i] == 's' || format[i] == 'f' || format[i] == 'i') && (format[i + 1] != '\0'))
	printf(", ");
i++;
} printf("\n");
va_end(a_list);
return;
}
