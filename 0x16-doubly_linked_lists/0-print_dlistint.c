#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all the
 * elements of a dlistint_t list
 * @h: pointer to the head of a doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
