#include "holberton.h"

/**
  * print_last_digit - prints the last digit of a number
  * @i: takes an integer value
  * Return: value of last digit of integer
  */
int print_last_digit(int i)
{
	if (i <= 9)
	i = i - i - i;
	return (i % 10);
	
}
