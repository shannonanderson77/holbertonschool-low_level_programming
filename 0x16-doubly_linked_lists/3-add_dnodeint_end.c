#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at
 * the end of a dlistint_t list
 * @head: pointer to the head of a doubly linked list
 * @n: data to write to new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	if (new_node == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		(*head) = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	temp_node = (*head);
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;
	new_node->prev = temp_node;
	return (new_node);
}
