#include "holberton.h"

/**
  * _memcpy - a fucnction that copies n bytes from
  * memory area src to memory area dest
  * @dest: takes a memory area to be copied to
  * @src: takes a memory area to be copied from
  * @n: number of bytes to copy from src to dest
  * Return: a pointer to new memory area
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
unsigned int j;

i = 0;
j = 0;
while (i < n)
{
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
}
return (dest);
}
