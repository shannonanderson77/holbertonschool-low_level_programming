#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * argstostr - a function that concatenates all the
  * arguments of a program
  * @ac: takes a string
  * @av: holds an array
  * Return: a pointer
  */
char *argstostr(int ac, char **av)
{
int i;
int j;
int sum = 0;
int count = 0;
char *p;

if (ac == 0 || av == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	count += 1;
	} sum += count + 1; /* finds how many chars total */
	}
p = malloc(sum + 1 * sizeof(char));

if (p == NULL) /* checks for successful memory alloc */
	return (NULL);
count = 0;
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		p[count] = av[i][j];
		count++;
	} p[count] = '\n'; /* to add newline */
	count++;
} p[count] = '\0'; /* ends string with null byte */
return (p);
}
