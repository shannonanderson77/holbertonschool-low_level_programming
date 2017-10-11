#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * malloc_checked - a function that allocates memory using malloc
  * @b: takes an integer
  * Return: a pointer to the allocated memory.
  */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b * sizeof(void *));
	if (p == NULL)
	exit(98);
return(p);
}
