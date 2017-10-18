#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * array_iterator - a function that executes a function given
  * as a parameter on each element of an array
  * @array: takes integers
  * @size: takes an integer
  * @action: takes a pointer to a function
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

for (i = 0; i < size; i++)
(*action)(array[i]);
}
