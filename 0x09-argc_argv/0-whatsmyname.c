#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that prints its name
  * followed by a new line
  * @argc: program name
  * @argv: array that holds argc values
  * Return: nothing
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (argc);
}
