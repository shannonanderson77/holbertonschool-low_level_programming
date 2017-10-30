#include "lists.h"

/**
  * print_listint - a function that prints all elements of a listint_t list
  * @h: takes a pointer to a list
  * Return: returns the number of nodes
  */
size_t print_listint(const listint_t *h)
{
int i;

i = 0;
while (h != NULL)
	{
printf("%d\n", h->n);
i++;
h = h->next;
	}

return (i);
}
