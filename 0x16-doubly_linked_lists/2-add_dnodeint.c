#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at
 * the beginning of a dlistint_t list
 * @head: pointer to the head of a doubly linked list
 * @n: data to write to new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;
	if (new_node == NULL)
		return (NULL);
	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
