#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/** main - a program that adds positive numbers
  * @argc: a count of arguments supplied to program
  * @argv: an array of pointers to the strings of argc
  * Return: an integer of Error if one of the numbers
  * given to the program is a symbol
  */
int main(int argc, char *argv[])
{
int i;
/*int j;
char ptr = *argv[];*/
int sum = 0;

/*for (j = 0; j < 255; j++)
{
	for (ptr = 0; ptr < 255; ptr++)
	{
if (ptr < 48 || ptr > 57)
{
printf("Error\n");
} return (1);
}*/



	for (i = 1; i < argc; i++)
	{
	sum = sum + atoi(argv[i]);
	} printf("%d\n", sum);
	return (0);
}
