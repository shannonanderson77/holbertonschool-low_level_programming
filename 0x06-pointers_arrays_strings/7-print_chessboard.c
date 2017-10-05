#include "holberton.h"

/**
  * print_chessboard - a function that prints the chessboard
  * @a: takes a pointer to one-dimension of board
  * Return: nothing.
  */
void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
	for (j = 0; j < 8; j++)
	{
	_putchar("r, ");
	_putchar("k, ");
	_putchar("b, ");
	_putchar("q, ");
	_putchar("k, ");
	_putchar("b, ");
	_putchar("k, ");
	_putchar("r, ");
	j++;
	}
	_putchar('\n');
i++;
}

}
