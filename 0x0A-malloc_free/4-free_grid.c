#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * free_grid - a function that frees a 2 dimensional grid
  * @grid: takes a 2D array
  * @height: takes an int
  * Return: nothing.
  */
void free_grid(int **grid, int height)
{
int i = 0;

if (grid == NULL || height == 0)
	return;
while (i < height)
{
	free(grid[i]);
	i++;
}
free(grid);
}
