#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
* print the numbers 00 to 99
* Return: Always 0 (Success)
*/
int main(void)
{
/* your code goes there */
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
	for (j = '0'; j <= '9'; j++)
	{
		putchar(i);
		putchar(j);
		if (i != '9' || j != '9')
		{
		putchar(',');
		putchar(' ');
	}
		else
		{
			putchar('\n');
		}
	}
	}
	return (0);
}
