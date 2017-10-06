#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * main - a program that prints all arguments it receives.
  * @argc: number of arguments supplied to program.
  * @argv: array of pointers to the strings of those arguments
  * Return: list of a argc strings
  */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; ++i)
{
printf("%s\n", argv[i]);
}
return (0);
}
