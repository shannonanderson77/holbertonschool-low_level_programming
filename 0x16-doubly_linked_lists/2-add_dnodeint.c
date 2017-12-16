#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to start of list
 * @n: new node data
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);
new_node->prev = NULL;
new_node->n = n;
if (*head == NULL)
{
	new_node->next = NULL;
	*head = new_node; /*when new_node = *head different output, why?*/
	return (new_node);
}
else
{
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
}
