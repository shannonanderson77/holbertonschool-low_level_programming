#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
* print all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
/* your code goes there */
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
		putchar('\n');
		}
	}
	return (0);
}
