#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - a function that frees a list
 * @head: pointer to start of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
if (head != NULL)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
}
