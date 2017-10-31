#include "lists.h"

/**
  * free_listint2 - a function that frees a listint_t list
  * @head: pointer to a list
  * Return: void
  */
void free_listint2(listint_t **head)
{
listint_t *temp_node;

if (head == NULL)
	return;
while ((*head)->next != NULL)
{
temp_node = *head;
*head = (*head)->next;
free(temp_node);
}
free(*head);
return;
}
