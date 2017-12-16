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
dlistint_t *new_node = NULL;
dlistint_t *temp_node = NULL;

temp_node = *head;
new_node = malloc(sizeof(dlistint_t));
new_node->n = n;
if (new_node == NULL)
{
	return (NULL);
}
if (temp_node == NULL)
{
	new_node->next = NULL;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
while (temp_node->next != NULL && temp_node != NULL)
{
	temp_node = temp_node->next;
}
new_node->next = NULL;
new_node->prev = temp_node;
temp_node->next = new_node;
return (new_node);
}
