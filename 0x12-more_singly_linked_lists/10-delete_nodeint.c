#include "lists.h"

/**
  * delete_nodeint_at_index - a function that deletes the node at index
  * index of a listint_t linked list
  * @head: a pointer to the head of the list
  * @index: an integer denoting where node should be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp_node;
listint_t *hold_node;
unsigned int count;

if ((*head) == NULL)
	return (-1);
if (index == 0)
{
temp_node = *head;
temp_node = temp_node->next;
free(*head);
*head = temp_node;
return (1);
}
	temp_node = *head;
	hold_node = temp_node->next;
for (count = 0; count < index - 1 && temp_node != NULL; count++)
{
	temp_node = temp_node->next; /*traverse the list*/
	hold_node = hold_node->next;
}
if (temp_node == NULL || temp_node->next == NULL)
{
	return (-1);
}
temp_node->next = hold_node->next;
free(hold_node);
return (1);
}
