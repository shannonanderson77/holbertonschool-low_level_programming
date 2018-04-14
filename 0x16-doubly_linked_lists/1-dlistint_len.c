#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list
 * @h: pointer to the head of a doubly linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
