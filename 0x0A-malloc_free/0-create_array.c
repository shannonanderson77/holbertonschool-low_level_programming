#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * create_array - a function that creates an array
  * of chars, and initializes it with a specific char
  * @size: takes an integer
  * @c: takes a pointer to a char
  * Return: a pointer to the array, NULL if it fails
  * or if size = 0.
  */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;

i = 0;
p = malloc(size * sizeof(char));
if (size == 0 || p == NULL)
return (NULL);
while (i < size)
{
p[i] = c;
++i;
}
return (p);
}
