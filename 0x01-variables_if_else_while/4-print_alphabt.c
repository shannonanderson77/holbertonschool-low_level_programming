#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
* print the alphabet in lowercase except for q and e
* Return: Always 0 (Success)
*/
int main(void)
{
/* your code goes there */
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
  if ((ch == 'q') || (ch == 'e'))
    ;
  else
    putchar(ch);
 } putchar('\n');
return (0);
}

