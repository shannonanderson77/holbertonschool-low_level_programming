#include "holberton.h"

/**
  * swap_int - a function that swaps the value of two integers
  * @a: takes the first integer
  * @b: takes the second integer
  * Return: the values of the swapped integers
  */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
