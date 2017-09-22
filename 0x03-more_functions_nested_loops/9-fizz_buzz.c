#include <stdio.h>

/**
  * main - classic interview FizzBuzz question
  *
  * Return: prints numbers from 1 to 100 but Fizz for
  * multiples of 3, Buzz for multiples of 5, FizzBuzz
  * for multiples of both
  */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
	if ((i % 3 == 0) && (i % 5 == 0))
	{
		printf("FizzBuzz ");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz ");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz ");
	}
	else
	{
		printf("%d ", i);
	}
} printf("\n");
	return (0);
}
