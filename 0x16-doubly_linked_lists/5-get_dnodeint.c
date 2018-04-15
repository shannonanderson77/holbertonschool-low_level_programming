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

/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list
 * @head: pointer to the start of a doubly linked list
 * @index: index of node to return
 * Return: pointer to nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp_node = NULL;
	unsigned int length = 0;

	length = dlistint_len(head);
	if (head == NULL)
		return (NULL);
	if (index  >= length)
		return (NULL);
	if (index == 0)
		return (head);
	temp_node = head;
	while (temp_node != NULL && index > 0)
	{
		temp_node = temp_node->next;
		index--;
	}
	return (temp_node);
}
