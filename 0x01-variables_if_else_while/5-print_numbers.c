#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
* print all single digit numbers of base 10 starting with 0
* Return: Always 0 (Success)
*/
int main(void)
{
/* your code goes there */
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	} putchar('\n');
	return (0);
}
