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
int i;
int j;

i = 0;
j = 0;
while (dest[i] != '\0')
{
	i++;
}
if (src[j] < src[n])
{
while (src[j] != '\0' && src[j] < n)
{
	dest[i] = src[j] + '\0';
	i++;
	j++;
}
}
else
{
	dest[i] = src[j];
	i++;
	j++;
}
return (dest);
}
