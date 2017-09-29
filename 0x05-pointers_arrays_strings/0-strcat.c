#include "holberton.h"
#include <stdio.h>
/**
  * _strcat - a function that concatenates two strings
  * @dest: takes the first string
  * @src: takes the second string
  * Return: two strings concatenated
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
{
	i++;
}
	while (src[j] != '\0')
{
	dest[i] = src[j];
	i++;
	j++;
}

	return (dest);
}
