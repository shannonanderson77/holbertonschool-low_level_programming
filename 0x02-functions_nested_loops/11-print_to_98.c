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

	do {
		if (n < 98)
			{
			printf("%d, ", n);
			n = n + 1;
			}
		else
			{
			printf("%d, ", n);
			n = n - 1;
			}
	}
	while (n != 98);
	printf("98\n");
}
