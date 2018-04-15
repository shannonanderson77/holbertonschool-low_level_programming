#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Write a function that free a dlistint_t list
 * @head: pointer to the head of a doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
	free(head);
	head = NULL;
}
