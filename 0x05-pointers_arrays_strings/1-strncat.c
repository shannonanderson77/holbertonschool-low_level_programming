#include "holberton.h"

/**
  * _strncat - a function that concatenates two strings
  * if the second string in longer than n bytes, no need
  * for a null terminator and only concatenate n characters
  * @dest: takes first string
  * @src: takes second string
  * @n: number of bytes to concatenate
  * Return: concatenated string in a pointer
  */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

/* length of dest */
while (dest[i] != '\0')
{
	i++;
}
/* length of src */
while (src[j] != '\0')
{
	j++;
}

if (j < n)
{
	j = 0;
	while (src[j] != '\0' && src[j] < n)
	{
		dest[i] = src[j] + '\0';
		i++;
		j++;
	}
}
else
{
	j = 0;
	dest[i] = src[j];
	i++;
	j++;
}
return (dest);
}
