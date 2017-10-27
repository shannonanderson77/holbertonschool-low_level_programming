#include "lists.h"

/**
  * print_list - a function that prints all the elements
  * of a list_t list
  * @h: a pointer to a list
  * Return: the number of nodes in list
  */
size_t print_list(const list_t *h)
{
int i; /* an integer to keep count of number of nodes*/

i = 0;
while (h != NULL) /* while pointer to first object in string is not NULL */
{
if (h->str == NULL)
{
	printf("[0] (nil)\n");

} else
{
printf("[%i] %s\n", h->len, h->str); /* print the members str len and str */
}

h = h->next; /* move to the next object in the string */
i++; /* increase count */
}

return (i);
}
