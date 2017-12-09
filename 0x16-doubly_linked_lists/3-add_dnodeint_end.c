
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

new_node = malloc(sizeof(dlistint_t));
new_node->n = n;
if (new_node == NULL)
{
	free(new_node);
	return (NULL);
}
if ((*head) == NULL)
{
new_node->next = (*head);
new_node->prev = NULL;
printf("%d\n", new_node->n);
}
if ((*head) != NULL)
{
(*head)->prev = new_node;
new_node->next = (*head);
new_node->prev = NULL;
printf("%d\n", new_node->n);
}
return (new_node);
}
