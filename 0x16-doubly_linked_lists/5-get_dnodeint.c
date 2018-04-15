#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list
 * @head: pointer to the start of a doubly linked list
 * @index: index of node to return
 * Return: pointer to nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL && counter < index)
	{
		head = head->next;
		counter++;
	}
	return (head);
}
