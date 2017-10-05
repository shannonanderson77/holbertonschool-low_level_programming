#include "holberton.h"
#include <stdio.h>

/**
  * print_diagsums - a function that prints the sum of
  * the two diagonals of a square matrix of integers
  * @size: takes an integer for size of matrix
  * @a: takes a double matrix of integers
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
int i;
int j:
int sum1;

sum1 = 0;
for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
	{
	if (i == j)
	{
		sum1 += a[i][j];
	}
	}
}
}
