#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all elements of a dlistint_t list
 * @h: a doubly linked list
 * Return: length of list
 */
size_t print_dlistint(const dlistint_t *h)
{
int counter = 0;
const dlistint_t *temp;

temp = h;
if (temp == NULL)
	return (0);
while (temp != NULL)
{
	printf("%d\n", temp->n);
	temp = temp->next;
	counter++;
}
return (counter);
}
