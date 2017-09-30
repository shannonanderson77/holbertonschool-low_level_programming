#include "holberton.h"

/**
  * _strcmp - a function that compares two strings
  * @s1: takes first string to be compared
  * @s2: takes second string to be compared
  * Return: an integer less than, equal to, or greater
  * than zero if s1 is respectively less than, equal to
  * or greater than s2
  */
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
} return (0);
}
