#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a list
 * @head: pointer to start of list
 * @n: new node data
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *temp_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
	return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if ((*head) == NULL)
{
	(*head) = new_node;
	new_node->prev = NULL;
	(*head) = new_node;
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
