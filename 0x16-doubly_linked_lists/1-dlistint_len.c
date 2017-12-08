#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns number of elements in a linked list
 * @h: a linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
int counter = 0;

if (h == NULL)
	return (0);
while (h != NULL)
{
	h = h->next;
	counter++;
}
return (counter);
}
