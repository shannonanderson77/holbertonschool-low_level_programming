#include "holberton.h"

/**
  * _strncpy - a function that copies a string
  * @dest: takes copied string
  * @src: string that is being copied
  * @n: number of bytes of copied string
  * Return: copied string in dest
  */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
for ( ; i < n; i++)
	dest[i] = '\0';
return (dest);
}
