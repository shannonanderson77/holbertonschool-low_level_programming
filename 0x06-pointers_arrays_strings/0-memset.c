#include "holberton.h"

/**
  * _memset -  a function that fills the first n bytes of
  * the memory area pointed to by s with the constant
  * byte b
  * @n: takes an unsigned int; the size of the memory to fill
  * @b: takes a char; the constant to print;
  * @s: the address of the memory to print to
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
