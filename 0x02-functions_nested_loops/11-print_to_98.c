#include "holberton.h"
#include <stdio.h>
/**
  * print_to_98 - a function that prints all natural
  * numbers from n to 98 followed by a new line
  * @n: takes an integer
  * Result: a list of integers
  */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 98)
			printf("%d, ", i);
		else
			printf("%d\n", i);
	}
}
