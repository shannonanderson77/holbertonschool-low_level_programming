#include "holberton.h"

/**
 * _strcpy - a function that copies a string pointed to by src
 * to the buffer pointed to by dest
 * @src: pointer to string
 * @dest: pointer to dest
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		return (dest);
}
