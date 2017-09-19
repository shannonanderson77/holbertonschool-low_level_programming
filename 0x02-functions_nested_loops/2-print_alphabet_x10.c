#include "holberton.h"
#define REPEAT10(p) p;p;p;p;p;p;p;p;p;p;

void print_alphabet_x10(void)
{
	char p;

	REPEAT10(for (p = 'a'; p <= 'z'; p++)
		_putchar(p);
	_putchar('\n');)

}
