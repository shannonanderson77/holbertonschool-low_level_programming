#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * main - a program that prints the number
  * of arguments passed into it followed by a new line
  * @argc: number of things passed to program
  * @argv: unused array that holds things passed to program
  * Return: integer
  */
int main(int argc, char __attribute__((unused))*argv[])
{
printf("%d\n", argc - 1);
return (argc);
}
