#include "holberton.h"

/**
  * reverse_array - a function that reverses the content
  * of an array of integers
  * @a: an array of integers
  * @n: number of elements to swap
  * Return: nothing
  */
void reverse_array(int *a, int n)
{
int i;
int swaps;
int *temp = 0;

swaps = n / 2;
i = 0;
while (swaps > 0)
{
while (i < n && i != 0)
{
	*temp = a[i];
	a[n] = a[i];
	a[i] = *temp;
	i++;
	n--;
	}
} swaps++;
}
