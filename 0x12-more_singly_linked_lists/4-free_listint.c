#include "lists.h"

/**
  * free_listint - a function that frees a listint_t list
  * @head: pointer to head of list
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp_node; /*use temp_node to traverse the list*/

	while (head != NULL)
	{
	temp_node = head; /*make temp_node the head*/
	head = head->next; /*move to next element*/
	free(temp_node); /*free previous element*/
	}
}
