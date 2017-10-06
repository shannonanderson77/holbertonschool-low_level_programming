#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that multiplies two numbers
  * @argc: should be an integer greater than 2
  * @argv: an array of pointers to values of argc
  * Return: 1 if 2 numbers aren't passed to program
  * else return result of multiplication
  */
int main(int argc, char *argv[])
{
int multiply;

if (argc > 2)
	{
	multiply = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiply);
} else
{
printf("Error\n");
return (1);
} return (0);
}
