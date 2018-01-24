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
	char *temp;

	temp = dest;
	while (*temp != '\0')
	{
		*temp = *temp + 1;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*temp = src[i];
		*temp = *temp + 1;
	}
	*temp = '\0';

	return (dest);
}
