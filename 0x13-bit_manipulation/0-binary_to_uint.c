#include "holberton.h"

/**
  * _strlen - a function that returns the length of a string
  * @x: a string
  * Return: an integer, the length of the string
  */
unsigned int _strlen(const char *x)
{
unsigned int i;

for (i = 0; x[i] != '\0'; i++)
	;
return (i);
}

/**
  * _power - a function that returns the power of a number
  * @x: an integer
  * Return: an integer, the power
  */
unsigned int _power(unsigned int x)
{
unsigned int result;

result = 1;
while (x > 0)
{
result = result * 2;
x--;
}
return (result);
}

/**
  * binary_to_uint - a function that converts a binary number to an integer
  * @b: a constant string
  * Return: an integer
  */
unsigned int binary_to_uint(const char *b)
{
unsigned int i;
unsigned int sum;
unsigned int length;

length = _strlen(b) - 1;
sum = 0;
if (b == NULL)
	return (0);
for (i = 0; b[i] != '\0'; i++, length--)

{
if (b[i] != '0' && b[i] != '1')
	return (0);
if (b[i] == '0')
	sum = sum;
if (b[i] == '1')
	sum = sum + _power(length);
}
return (sum);
}
