#include "lists.h"

/**
  * free_listint2 - a function that frees a listint_t list
  * @head: pointer to a list
  * Return: void
  */
void free_listint2(listint_t **head)
{
listint_t *temp_node;

if (head == NULL) /*if list is empty*/
	return;
while ((*head)->next != NULL) /*while not at end of list*/
{
temp_node = *head; /*make temp_node the head*/
*head = (*head)->next; /*traverse the list*/
free(temp_node); /*free temp_node as head moves along the list*/
}
free(*head); /*free the head once the end is reached*/
return;
}
