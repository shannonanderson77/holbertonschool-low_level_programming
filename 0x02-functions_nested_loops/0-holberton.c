#include "holberton.h"

/**
 * main - print the string Holberton
 *
 * Return: Always 0.
 */

int main(void)
{

	char *p = "Holberton";

	for (; *p; p++)

	_putchar(*p);
	_putchar('\n');

	return (0);
}
