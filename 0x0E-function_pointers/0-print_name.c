#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_name - a function that prints a name
  * @name: takes a character string
  * @f: a pointer to a function
  * Return: void.
  */
void print_name(char *name, void (*f)(char *))
{
if (f && name)
f(name);
}
