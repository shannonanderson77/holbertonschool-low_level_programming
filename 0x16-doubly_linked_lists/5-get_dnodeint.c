#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function that gets the nth node of a list
 * @head: pointer to start of list
 * @index: nth node
 * Return: pointer to node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int length = 0;

if (head->next == NULL && index == 0)
	return (head);
if (head->next == NULL && index > 0)
	return (NULL);
while (head->next != NULL && length < index)
{
	head = head->next;
	length++;
}
if (length == index)
{
	return (head);
}
return (NULL);
}
