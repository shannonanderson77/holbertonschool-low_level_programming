#include "lists.h"

/**
  * free_listint2 - a function that frees a listint_t list
  * @head: pointer to a list
  * Return: void
  */
void free_listint2(listint_t **head)
{
listint_t *temp_node;

if (head == NULL || (*head) == NULL) /*if list is empty*/
	return;
while ((*head)->next != NULL) /*while not at end of list*/
{
temp_node = (*head)->next; /*traverse the list with temp as the head*/
free(*head); /*free head as temp_node moves along the list*/
*head = temp_node; /*make temp node the new head*/
} free(*head);
}
